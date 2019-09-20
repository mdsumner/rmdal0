#include <iostream>
#include <algorithm>
#include <limits>
#include <string>
#include <vector>

#include <mdal.h>
#include "/perm_storage/home/mdsumner/include/mdal_config.hpp"
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
NumericVector rmdal0() {
  //std::cout << "mdalinfo " << MDAL_Status() << std::endl;
  Rprintf("mdalinfo %i\n", MDAL_Status());
  //Rprintf("mdalinfo %i\n", MDAL_Version());
  return  NumericVector::create(2);
}

// [[Rcpp::export]]
NumericVector test() {
  int m;

  return NumericVector::create(1);
}

