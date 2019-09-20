#include <iostream>
#include <algorithm>
#include <limits>
#include <string>
#include <vector>

#include <mdal.h>

#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
NumericVector rmdal0() {
  //std::cout << "mdalinfo " << MDAL_Status() << std::endl;
  Rprintf("mdalinfo %i\n", MDAL_Status());
  return  NumericVector::create(2);
}


