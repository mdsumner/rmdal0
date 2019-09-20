#include <iostream>
#include <algorithm>
#include <limits>
#include <string>
#include <vector>

#include <mdal.h>

#include <Rcpp.h>
using namespace Rcpp;

// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//

// [[Rcpp::export]]
NumericVector rmdal0() {
  std::cout << "mdalinfo " << MDAL_Status() << std::endl;
  return  NumericVector::create(2);
}


