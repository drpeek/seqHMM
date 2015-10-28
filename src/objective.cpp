#include "seqHMM.h"
using namespace Rcpp;

// [[Rcpp::depends(RcppArmadillo)]]
// [[Rcpp::export]]

List objective(NumericVector transitionMatrix, NumericVector emissionArray,
    NumericVector initialProbs, IntegerVector obsArray, IntegerVector transNZ,
    IntegerVector emissNZ, IntegerVector initNZ, IntegerVector nSymbols, int threads = 1) {

  IntegerVector eDims = emissionArray.attr("dim"); //m,p,r
  IntegerVector oDims = obsArray.attr("dim"); //k,n,r

  arma::cube emission(emissionArray.begin(), eDims[0], eDims[1], eDims[2], false);
  arma::icube obs(obsArray.begin(), oDims[0], oDims[1], oDims[2], false);
  arma::vec init(initialProbs.begin(), emission.n_rows, false);
  arma::mat transition(transitionMatrix.begin(), emission.n_rows, emission.n_rows, false);
  arma::imat ANZ(transNZ.begin(), emission.n_rows, emission.n_rows, false);
  arma::icube BNZ(emissNZ.begin(), emission.n_rows, emission.n_cols - 1, emission.n_slices, false);
  arma::ivec INZ(initNZ.begin(), emission.n_rows, false);

  arma::vec grad(arma::accu(ANZ) + arma::accu(BNZ) + arma::accu(INZ), arma::fill::zeros);

  arma::cube alpha(emission.n_rows, obs.n_cols, obs.n_rows); //m,n,k
  arma::cube beta(emission.n_rows, obs.n_cols, obs.n_rows); //m,n,k
  arma::mat scales(obs.n_cols, obs.n_rows); //m,n,k

  internalForward(transition, emission, init, obs, alpha, scales, threads);
  if (!alpha.is_finite()) {
    grad.fill(-arma::math::inf());
    return List::create(Named("objective") = arma::math::inf(), Named("gradient") = wrap(grad));
  }
  internalBackward(transition, emission, obs, beta, scales, threads);
  if (!beta.is_finite()) {
    grad.fill(-arma::math::inf());
    return List::create(Named("objective") = arma::math::inf(), Named("gradient") = wrap(grad));
  }

  arma::mat gradmat(arma::accu(ANZ) + arma::accu(BNZ) + arma::accu(INZ), obs.n_rows,
      arma::fill::zeros);

#pragma omp parallel for if(obs.n_rows >= threads) schedule(static) num_threads(threads) \
  default(none) shared(alpha, beta, scales, gradmat, nSymbols, ANZ, BNZ, INZ, \
    obs, init, transition, emission)
  for (int k = 0; k < obs.n_rows; k++) {
    int countgrad = 0;

    // transitionMatrix
    arma::vec gradArow(emission.n_rows);
    arma::mat gradA(emission.n_rows, emission.n_rows);

    for (unsigned int i = 0; i < emission.n_rows; i++) {
      arma::uvec ind = arma::find(ANZ.row(i));

      if (ind.n_elem > 0) {
        gradArow.zeros();
        gradA.eye();
        gradA.each_row() -= transition.row(i);
        gradA.each_col() %= transition.row(i).t();

        for (unsigned int t = 0; t < (obs.n_cols - 1); t++) {
          for (unsigned int j = 0; j < emission.n_rows; j++) {
            double tmp = 1.0;
            for (unsigned int r = 0; r < obs.n_slices; r++) {
              tmp *= emission(j, obs(k, t + 1, r), r);
            }
            gradArow(j) += alpha(i, t, k) * tmp * beta(j, t + 1, k) / scales(t + 1, k);
          }

        }

        gradArow = gradA * gradArow;
        gradmat.col(k).subvec(countgrad, countgrad + ind.n_elem - 1) = gradArow.rows(ind);
        countgrad += ind.n_elem;
      }
    }
    // emissionMatrix
    for (unsigned int r = 0; r < obs.n_slices; r++) {
      arma::vec gradBrow(nSymbols[r]);
      arma::mat gradB(nSymbols[r], nSymbols[r]);
      for (unsigned int i = 0; i < emission.n_rows; i++) {
        arma::uvec ind = arma::find(BNZ.slice(r).row(i));
        if (ind.n_elem > 0) {
          gradBrow.zeros();
          gradB.eye();
          gradB.each_row() -= emission.slice(r).row(i).subvec(0, nSymbols[r] - 1);
          gradB.each_col() %= emission.slice(r).row(i).subvec(0, nSymbols[r] - 1).t();
          for (int j = 0; j < nSymbols[r]; j++) {
            if (obs(k, 0, r) == j) {
              double tmp = 1.0;
              for (unsigned int r2 = 0; r2 < obs.n_slices; r2++) {
                if (r2 != r) {
                  tmp *= emission(i, obs(k, 0, r2), r2);
                }
              }
              gradBrow(j) += init(i) * tmp * beta(i, 0, k) / scales(0, k);
            }
            for (unsigned int t = 0; t < (obs.n_cols - 1); t++) {
              if (obs(k, t + 1, r) == j) {
                double tmp = 1.0;
                for (unsigned int r2 = 0; r2 < obs.n_slices; r2++) {
                  if (r2 != r) {
                    tmp *= emission(i, obs(k, t + 1, r2), r2);
                  }
                }
                gradBrow(j) += arma::dot(alpha.slice(k).col(t), transition.col(i)) * tmp
                    * beta(i, t + 1, k) / scales(t + 1, k);
              }
            }

          }
          gradBrow = gradB * gradBrow;
          gradmat.col(k).subvec(countgrad, countgrad + ind.n_elem - 1) = gradBrow.rows(ind);
          countgrad += ind.n_elem;

        }
      }
    }
    // InitProbs
    arma::uvec ind = arma::find(INZ);
    if (ind.n_elem > 0) {
      arma::vec gradIrow(emission.n_rows);
      arma::mat gradI(emission.n_rows, emission.n_rows);

      gradIrow.zeros();
      gradI.zeros();
      gradI.eye();
      gradI.each_row() -= init.t();
      gradI.each_col() %= init;
      for (unsigned int j = 0; j < emission.n_rows; j++) {
        double tmp = 1.0;
        for (unsigned int r = 0; r < obs.n_slices; r++) {
          tmp *= emission(j, obs(k, 0, r), r);
        }
        gradIrow(j) += tmp * beta(j, 0, k) / scales(0, k);
      }

      gradIrow = gradI * gradIrow;
      gradmat.col(k).subvec(countgrad, countgrad + ind.n_elem - 1) = gradIrow.rows(ind);
      countgrad += ind.n_elem;
    }
  }
  grad = sum(gradmat, 1);
  return List::create(Named("objective") = -arma::accu(log(scales)),
      Named("gradient") = wrap(-grad));
}
