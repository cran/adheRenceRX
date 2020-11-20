// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// date_checkCpp
NumericVector date_checkCpp(NumericVector x, NumericVector y);
RcppExport SEXP _adheRenceRX_date_checkCpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(date_checkCpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// episode_checkCpp
NumericVector episode_checkCpp(NumericVector x, int perm_gap, int init_rank);
RcppExport SEXP _adheRenceRX_episode_checkCpp(SEXP xSEXP, SEXP perm_gapSEXP, SEXP init_rankSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type perm_gap(perm_gapSEXP);
    Rcpp::traits::input_parameter< int >::type init_rank(init_rankSEXP);
    rcpp_result_gen = Rcpp::wrap(episode_checkCpp(x, perm_gap, init_rank));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_adheRenceRX_date_checkCpp", (DL_FUNC) &_adheRenceRX_date_checkCpp, 2},
    {"_adheRenceRX_episode_checkCpp", (DL_FUNC) &_adheRenceRX_episode_checkCpp, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_adheRenceRX(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}