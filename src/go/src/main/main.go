package main

import "C"
import "slice"

//export SumInt
func SumInt( x []int32 ) int32 {
  return slice.SumInt(x)
}

//export SumDouble
func SumDouble( x []float64 ) float64 {
  return slice.SumDouble(x)
}

func main() {}
