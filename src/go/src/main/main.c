#define USE_RINTERNALS
#include <R.h>
#include <Rinternals.h>
#include "_cgo_export.h"

SEXP sum_int( SEXP x ){
  if( TYPEOF(x) != INTSXP ) error("expecting an integer vector") ;
  GoSlice gox = { INTEGER(x), LENGTH(x), LENGTH(x) } ;
  return ScalarInteger( SumInt(gox) ) ;
}

SEXP sum_double( SEXP x ){
  if( TYPEOF(x) != REALSXP ) error("expecting a numeric vector") ;
  GoSlice gox = { REAL(x), LENGTH(x), LENGTH(x) } ;
  return ScalarReal( SumDouble(gox) ) ;
}
