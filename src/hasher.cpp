
#include <Rcpp.h>

#include "farmhash.h"

// [[Rcpp::export]]
size_t farmhash(const std::string & s) {
  return util::Hash(s.c_str(), s.size());
}
