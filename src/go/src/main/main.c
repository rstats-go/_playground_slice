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


SEXP IntegerVectorFromGoSlice( void* data, int n ){
  SEXP res = allocVector( INTSXP, n) ;
  memmove( INTEGER(res), data, sizeof(int)*n ) ;
  return res ;
}

SEXP numbers( SEXP n ){
  if( TYPEOF(n) != INTSXP || LENGTH(n) != 1 ) error("expecting a single integer") ;

  return Numbers( INTEGER(n)[0] ) ;
}
