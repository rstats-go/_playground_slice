package main

/*
  #define USE_RINTERNALS
  #include <R.h>
  #include <Rinternals.h>

  SEXP IntegerVectorFromGoSlice( void* data, int ) ;
*/
import "C"
import "slice"
import "unsafe"

//export SumInt
func SumInt( x []int32 ) int32 {
  return slice.SumInt(x)
}

//export SumDouble
func SumDouble( x []float64 ) float64 {
  return slice.SumDouble(x)
}

//export Numbers
func Numbers( n int32 ) C.SEXP {
  // call a go function and get a slice
  res := slice.Numbers(n)

  // handle the raw data from the slice to the C side and let it build an
  // R object from it
  return C.IntegerVectorFromGoSlice( unsafe.Pointer(&res[0]), C.int(len(res)) ) ;
}

func main() {}
