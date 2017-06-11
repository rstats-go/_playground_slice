package slice

func SumInt( x []int32 ) int32 {
  var sum int32
  for _,v := range x {
    sum += v
  }
  return sum
}

func SumDouble( x []float64 ) float64 {
  var sum float64
  for _,v := range x {
    sum += v
  }
  return sum
}
