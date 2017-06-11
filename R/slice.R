#' @useDynLib goslice
#' @export
sum_int <- function(x) {
  .Call("sum_int", x, PACKAGE = "goslice")
}

#' @export
sum_double <- function(x) {
  .Call("sum_double", x, PACKAGE = "goslice")
}
