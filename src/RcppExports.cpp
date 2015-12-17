// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// EM
List EM(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, const arma::ivec& nSymbols, int itermax, double tol, int trace, int threads);
RcppExport SEXP seqHMM_EM(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP nSymbolsSEXP, SEXP itermaxSEXP, SEXP tolSEXP, SEXP traceSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< int >::type itermax(itermaxSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    __result = Rcpp::wrap(EM(transitionMatrix, emissionArray, initialProbs, obsArray, nSymbols, itermax, tol, trace, threads));
    return __result;
END_RCPP
}
// EMx
List EMx(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, const arma::ivec& nSymbols, NumericMatrix coefs, const arma::mat& X, const arma::ivec& numberOfStates, int itermax, double tol, int trace, int threads);
RcppExport SEXP seqHMM_EMx(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP nSymbolsSEXP, SEXP coefsSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP, SEXP itermaxSEXP, SEXP tolSEXP, SEXP traceSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type coefs(coefsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type numberOfStates(numberOfStatesSEXP);
    Rcpp::traits::input_parameter< int >::type itermax(itermaxSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    __result = Rcpp::wrap(EMx(transitionMatrix, emissionArray, initialProbs, obsArray, nSymbols, coefs, X, numberOfStates, itermax, tol, trace, threads));
    return __result;
END_RCPP
}
// forwardbackward
List forwardbackward(const arma::mat& transition, NumericVector emissionArray, const arma::vec& init, IntegerVector obsArray, bool forwardonly, int threads);
RcppExport SEXP seqHMM_forwardbackward(SEXP transitionSEXP, SEXP emissionArraySEXP, SEXP initSEXP, SEXP obsArraySEXP, SEXP forwardonlySEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< bool >::type forwardonly(forwardonlySEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    __result = Rcpp::wrap(forwardbackward(transition, emissionArray, init, obsArray, forwardonly, threads));
    return __result;
END_RCPP
}
// forwardbackwardx
List forwardbackwardx(const arma::mat& transition, NumericVector emissionArray, const arma::vec& init, IntegerVector obsArray, const arma::mat& coef, const arma::mat& X, const arma::ivec& numberOfStates, bool forwardonly, int threads);
RcppExport SEXP seqHMM_forwardbackwardx(SEXP transitionSEXP, SEXP emissionArraySEXP, SEXP initSEXP, SEXP obsArraySEXP, SEXP coefSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP, SEXP forwardonlySEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type numberOfStates(numberOfStatesSEXP);
    Rcpp::traits::input_parameter< bool >::type forwardonly(forwardonlySEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    __result = Rcpp::wrap(forwardbackwardx(transition, emissionArray, init, obsArray, coef, X, numberOfStates, forwardonly, threads));
    return __result;
END_RCPP
}
// log_EM
List log_EM(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, const arma::ivec& nSymbols, int itermax, double tol, int trace, int threads);
RcppExport SEXP seqHMM_log_EM(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP nSymbolsSEXP, SEXP itermaxSEXP, SEXP tolSEXP, SEXP traceSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< int >::type itermax(itermaxSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    __result = Rcpp::wrap(log_EM(transitionMatrix, emissionArray, initialProbs, obsArray, nSymbols, itermax, tol, trace, threads));
    return __result;
END_RCPP
}
// log_EMx
List log_EMx(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, IntegerVector nSymbols, NumericMatrix coefs, const arma::mat& X, const arma::ivec& numberOfStates, int itermax, double tol, int trace, int threads);
RcppExport SEXP seqHMM_log_EMx(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP nSymbolsSEXP, SEXP coefsSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP, SEXP itermaxSEXP, SEXP tolSEXP, SEXP traceSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type coefs(coefsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type numberOfStates(numberOfStatesSEXP);
    Rcpp::traits::input_parameter< int >::type itermax(itermaxSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    __result = Rcpp::wrap(log_EMx(transitionMatrix, emissionArray, initialProbs, obsArray, nSymbols, coefs, X, numberOfStates, itermax, tol, trace, threads));
    return __result;
END_RCPP
}
// log_forwardbackward
List log_forwardbackward(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, bool forwardonly, int threads);
RcppExport SEXP seqHMM_log_forwardbackward(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP forwardonlySEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< bool >::type forwardonly(forwardonlySEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    __result = Rcpp::wrap(log_forwardbackward(transitionMatrix, emissionArray, initialProbs, obsArray, forwardonly, threads));
    return __result;
END_RCPP
}
// log_forwardbackwardx
List log_forwardbackwardx(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, const arma::mat& coef, const arma::mat& X, const arma::ivec& numberOfStates, bool forwardonly, int threads);
RcppExport SEXP seqHMM_log_forwardbackwardx(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP coefSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP, SEXP forwardonlySEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type numberOfStates(numberOfStatesSEXP);
    Rcpp::traits::input_parameter< bool >::type forwardonly(forwardonlySEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    __result = Rcpp::wrap(log_forwardbackwardx(transitionMatrix, emissionArray, initialProbs, obsArray, coef, X, numberOfStates, forwardonly, threads));
    return __result;
END_RCPP
}
// log_logLikHMM
NumericVector log_logLikHMM(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, int threads);
RcppExport SEXP seqHMM_log_logLikHMM(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    __result = Rcpp::wrap(log_logLikHMM(transitionMatrix, emissionArray, initialProbs, obsArray, threads));
    return __result;
END_RCPP
}
// log_logLikMixHMM
NumericVector log_logLikMixHMM(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, const arma::mat& coef, const arma::mat& X, const arma::ivec& numberOfStates, int threads);
RcppExport SEXP seqHMM_log_logLikMixHMM(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP coefSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type numberOfStates(numberOfStatesSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    __result = Rcpp::wrap(log_logLikMixHMM(transitionMatrix, emissionArray, initialProbs, obsArray, coef, X, numberOfStates, threads));
    return __result;
END_RCPP
}
// log_objective
List log_objective(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, IntegerVector transNZ, IntegerVector emissNZ, IntegerVector initNZ, IntegerVector nSymbols, int threads);
RcppExport SEXP seqHMM_log_objective(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP transNZSEXP, SEXP emissNZSEXP, SEXP initNZSEXP, SEXP nSymbolsSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type transNZ(transNZSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type emissNZ(emissNZSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type initNZ(initNZSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    __result = Rcpp::wrap(log_objective(transitionMatrix, emissionArray, initialProbs, obsArray, transNZ, emissNZ, initNZ, nSymbols, threads));
    return __result;
END_RCPP
}
// log_objectivex
List log_objectivex(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, IntegerVector transNZ, IntegerVector emissNZ, IntegerVector initNZ, const arma::ivec& nSymbols, const arma::mat& coef, const arma::mat& X, const arma::ivec& numberOfStates, int threads);
RcppExport SEXP seqHMM_log_objectivex(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP transNZSEXP, SEXP emissNZSEXP, SEXP initNZSEXP, SEXP nSymbolsSEXP, SEXP coefSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type transNZ(transNZSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type emissNZ(emissNZSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type initNZ(initNZSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type numberOfStates(numberOfStatesSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    __result = Rcpp::wrap(log_objectivex(transitionMatrix, emissionArray, initialProbs, obsArray, transNZ, emissNZ, initNZ, nSymbols, coef, X, numberOfStates, threads));
    return __result;
END_RCPP
}
// logLikHMM
NumericVector logLikHMM(const arma::mat& transition, NumericVector emissionArray, const arma::vec& init, IntegerVector obsArray, int threads);
RcppExport SEXP seqHMM_logLikHMM(SEXP transitionSEXP, SEXP emissionArraySEXP, SEXP initSEXP, SEXP obsArraySEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    __result = Rcpp::wrap(logLikHMM(transition, emissionArray, init, obsArray, threads));
    return __result;
END_RCPP
}
// logLikMixHMM
NumericVector logLikMixHMM(const arma::mat& transition, NumericVector emissionArray, const arma::vec& init, IntegerVector obsArray, const arma::mat& coef, const arma::mat& X, const arma::ivec& numberOfStates, int threads);
RcppExport SEXP seqHMM_logLikMixHMM(SEXP transitionSEXP, SEXP emissionArraySEXP, SEXP initSEXP, SEXP obsArraySEXP, SEXP coefSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type numberOfStates(numberOfStatesSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    __result = Rcpp::wrap(logLikMixHMM(transition, emissionArray, init, obsArray, coef, X, numberOfStates, threads));
    return __result;
END_RCPP
}
// logSumExp
double logSumExp(const arma::vec& x);
RcppExport SEXP seqHMM_logSumExp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    __result = Rcpp::wrap(logSumExp(x));
    return __result;
END_RCPP
}
// objective
List objective(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, IntegerVector transNZ, IntegerVector emissNZ, IntegerVector initNZ, const arma::ivec& nSymbols, int threads);
RcppExport SEXP seqHMM_objective(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP transNZSEXP, SEXP emissNZSEXP, SEXP initNZSEXP, SEXP nSymbolsSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type transNZ(transNZSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type emissNZ(emissNZSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type initNZ(initNZSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    __result = Rcpp::wrap(objective(transitionMatrix, emissionArray, initialProbs, obsArray, transNZ, emissNZ, initNZ, nSymbols, threads));
    return __result;
END_RCPP
}
// objectivex
List objectivex(const arma::mat& transition, NumericVector emissionArray, const arma::vec& init, IntegerVector obsArray, const arma::imat& ANZ, IntegerVector emissNZ, const arma::ivec& INZ, const arma::ivec& nSymbols, const arma::mat& coef, const arma::mat& X, arma::ivec& numberOfStates, int threads);
RcppExport SEXP seqHMM_objectivex(SEXP transitionSEXP, SEXP emissionArraySEXP, SEXP initSEXP, SEXP obsArraySEXP, SEXP ANZSEXP, SEXP emissNZSEXP, SEXP INZSEXP, SEXP nSymbolsSEXP, SEXP coefSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< const arma::imat& >::type ANZ(ANZSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type emissNZ(emissNZSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type INZ(INZSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::ivec& >::type numberOfStates(numberOfStatesSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    __result = Rcpp::wrap(objectivex(transition, emissionArray, init, obsArray, ANZ, emissNZ, INZ, nSymbols, coef, X, numberOfStates, threads));
    return __result;
END_RCPP
}
// varcoef
NumericMatrix varcoef(const arma::mat& coef, const arma::mat& X);
RcppExport SEXP seqHMM_varcoef(SEXP coefSEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    __result = Rcpp::wrap(varcoef(coef, X));
    return __result;
END_RCPP
}
// viterbi
List viterbi(const arma::mat& transition, NumericVector emissionArray, const arma::vec& init, IntegerVector obsArray);
RcppExport SEXP seqHMM_viterbi(SEXP transitionSEXP, SEXP emissionArraySEXP, SEXP initSEXP, SEXP obsArraySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    __result = Rcpp::wrap(viterbi(transition, emissionArray, init, obsArray));
    return __result;
END_RCPP
}
// viterbix
List viterbix(const arma::mat& transition, NumericVector emissionArray, const arma::vec& init, IntegerVector obsArray, const arma::mat& coef, const arma::mat& X, const arma::ivec& numberOfStates);
RcppExport SEXP seqHMM_viterbix(SEXP transitionSEXP, SEXP emissionArraySEXP, SEXP initSEXP, SEXP obsArraySEXP, SEXP coefSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type numberOfStates(numberOfStatesSEXP);
    __result = Rcpp::wrap(viterbix(transition, emissionArray, init, obsArray, coef, X, numberOfStates));
    return __result;
END_RCPP
}
