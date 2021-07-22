
#include <Rcpp.h>

#include "farmhash.h"

// [[Rcpp::export]]
Rcpp::NumericVector farmhash(const std::vector<std::string> & sv) {
    size_t n = sv.size();
    Rcpp::NumericVector nv(n);
    std::vector<int64_t> iv(n);

    for (size_t i=0; i<n; i++) {
        iv[i] = static_cast<int64_t>(util::Hash(sv[i].c_str(), sv[i].size()));
    }

    // see e.g. https://gallery.rcpp.org/articles/creating-integer64-and-nanotime-vectors/
    std::memcpy(&(nv[0]), &(iv[0]), n * sizeof(double));
    nv.attr("class") = "integer64";
    return nv;
}
