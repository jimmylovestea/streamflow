// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// qsaxC
NumericVector qsaxC(const double& n);
RcppExport SEXP _streamflow_qsaxC(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(qsaxC(n));
    return rcpp_result_gen;
END_RCPP
}
// saxsymbC
NumericVector saxsymbC(const NumericVector& s, const double& a);
RcppExport SEXP _streamflow_saxsymbC(SEXP sSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type s(sSEXP);
    Rcpp::traits::input_parameter< const double& >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(saxsymbC(s, a));
    return rcpp_result_gen;
END_RCPP
}
// mindistC
double mindistC(const NumericVector& psx, const NumericVector& psy, const double& a, const double& n);
RcppExport SEXP _streamflow_mindistC(SEXP psxSEXP, SEXP psySEXP, SEXP aSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type psx(psxSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type psy(psySEXP);
    Rcpp::traits::input_parameter< const double& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double& >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(mindistC(psx, psy, a, n));
    return rcpp_result_gen;
END_RCPP
}
// paaC
NumericVector paaC(const NumericVector& s, const double& w);
RcppExport SEXP _streamflow_paaC(SEXP sSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type s(sSEXP);
    Rcpp::traits::input_parameter< const double& >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(paaC(s, w));
    return rcpp_result_gen;
END_RCPP
}
// naC
bool naC(const NumericVector& x);
RcppExport SEXP _streamflow_naC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(naC(x));
    return rcpp_result_gen;
END_RCPP
}
// dsaxC
double dsaxC(const NumericVector& x, const NumericVector& y, const double& w, const double& alpha);
RcppExport SEXP _streamflow_dsaxC(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const double& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const double& >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(dsaxC(x, y, w, alpha));
    return rcpp_result_gen;
END_RCPP
}
// saxvec
NumericVector saxvec(const NumericVector& x, const NumericMatrix& m, const double& w, const double& alpha);
RcppExport SEXP _streamflow_saxvec(SEXP xSEXP, SEXP mSEXP, SEXP wSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type m(mSEXP);
    Rcpp::traits::input_parameter< const double& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const double& >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(saxvec(x, m, w, alpha));
    return rcpp_result_gen;
END_RCPP
}
// deucC
double deucC(const NumericVector& x, const NumericVector& y);
RcppExport SEXP _streamflow_deucC(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(deucC(x, y));
    return rcpp_result_gen;
END_RCPP
}
// eucvec
NumericVector eucvec(const NumericVector& x, const NumericMatrix& m);
RcppExport SEXP _streamflow_eucvec(SEXP xSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(eucvec(x, m));
    return rcpp_result_gen;
END_RCPP
}
// dcplxC
double dcplxC(const NumericVector& x, const NumericVector& y);
RcppExport SEXP _streamflow_dcplxC(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(dcplxC(x, y));
    return rcpp_result_gen;
END_RCPP
}
// cplxvec
NumericVector cplxvec(const NumericVector& x, const NumericMatrix& m);
RcppExport SEXP _streamflow_cplxvec(SEXP xSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(cplxvec(x, m));
    return rcpp_result_gen;
END_RCPP
}
// dcidC
double dcidC(const NumericVector& x, const NumericVector& y);
RcppExport SEXP _streamflow_dcidC(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(dcidC(x, y));
    return rcpp_result_gen;
END_RCPP
}
// cidvec
NumericVector cidvec(const NumericVector& x, const NumericMatrix& m);
RcppExport SEXP _streamflow_cidvec(SEXP xSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(cidvec(x, m));
    return rcpp_result_gen;
END_RCPP
}
// eucdm
NumericMatrix eucdm(const NumericMatrix& m);
RcppExport SEXP _streamflow_eucdm(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(eucdm(m));
    return rcpp_result_gen;
END_RCPP
}
// saxdm
NumericMatrix saxdm(const NumericMatrix& m, const double& w, const double& alpha);
RcppExport SEXP _streamflow_saxdm(SEXP mSEXP, SEXP wSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type m(mSEXP);
    Rcpp::traits::input_parameter< const double& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const double& >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(saxdm(m, w, alpha));
    return rcpp_result_gen;
END_RCPP
}
// ciddm
NumericMatrix ciddm(const NumericMatrix& m);
RcppExport SEXP _streamflow_ciddm(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(ciddm(m));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_streamflow_qsaxC", (DL_FUNC) &_streamflow_qsaxC, 1},
    {"_streamflow_saxsymbC", (DL_FUNC) &_streamflow_saxsymbC, 2},
    {"_streamflow_mindistC", (DL_FUNC) &_streamflow_mindistC, 4},
    {"_streamflow_paaC", (DL_FUNC) &_streamflow_paaC, 2},
    {"_streamflow_naC", (DL_FUNC) &_streamflow_naC, 1},
    {"_streamflow_dsaxC", (DL_FUNC) &_streamflow_dsaxC, 4},
    {"_streamflow_saxvec", (DL_FUNC) &_streamflow_saxvec, 4},
    {"_streamflow_deucC", (DL_FUNC) &_streamflow_deucC, 2},
    {"_streamflow_eucvec", (DL_FUNC) &_streamflow_eucvec, 2},
    {"_streamflow_dcplxC", (DL_FUNC) &_streamflow_dcplxC, 2},
    {"_streamflow_cplxvec", (DL_FUNC) &_streamflow_cplxvec, 2},
    {"_streamflow_dcidC", (DL_FUNC) &_streamflow_dcidC, 2},
    {"_streamflow_cidvec", (DL_FUNC) &_streamflow_cidvec, 2},
    {"_streamflow_eucdm", (DL_FUNC) &_streamflow_eucdm, 1},
    {"_streamflow_saxdm", (DL_FUNC) &_streamflow_saxdm, 3},
    {"_streamflow_ciddm", (DL_FUNC) &_streamflow_ciddm, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_streamflow(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
