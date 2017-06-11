#define USE_RINTERNALS
#include <R.h>
#include <Rinternals.h>
#include "_cgo_export.h"

SEXP sum_int( SEXP x ){
  GoSlice gox = { INTEGER(x), LENGTH(x), LENGTH(x) } ;
  return ScalarInteger( SumInt(gox) ) ;
}

SEXP sum_double( SEXP x ){
  GoSlice gox = { REAL(x), LENGTH(x), LENGTH(x) } ;
  return ScalarReal( SumDouble(gox) ) ;
}
