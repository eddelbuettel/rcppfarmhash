
## Rcpp Interface to the Google FarmHash Family of Hash Functions

[![License](https://eddelbuettel.github.io/badges/GPL2+.svg)](https://www.gnu.org/licenses/gpl-2.0.html)
[![CRAN](https://www.r-pkg.org/badges/version/RcppFarmHash)](https://cran.r-project.org/package=RcppFarmHash)
[![Dependencies](https://tinyverse.netlify.com/badge/RcppFarmHash)](https://cran.r-project.org/package=RcppFarmHash)
[![Downloads](https://cranlogs.r-pkg.org/badges/RcppFarmHash?color=brightgreen)](https://www.r-pkg.org/pkg/RcppFarmHash)
[![Last Commit](https://img.shields.io/github/last-commit/eddelbuettel/rcppfarmhash)](https://github.com/eddelbuettel/rcppfarmhash)

### Motivation

Google BigQuery uses FarmHash in its `FARM_FINGERPRINT` function. By using the same
underlying [FarmHash](https://github.com/google/farmhash) library, this package allows R
users to compute the same hash digest fingerprints.

### Example

```r
> suppressMessages({ library(RcppFarmHash); library(bit64) })
> farmhash(c("foo", "bar", "baz"))
integer64
[1] 6150913649986995171 -98778129085727977  3758908700204700005
>
```

### Installation

The package can be installed from CRAN via the usual command

```r
install.packages("RcppFarmHash")
```

or, alternatively, also directly from the source repository:

```r
remotes::install_github("eddelbuettel/rcppfarmhash")
```

### License

This package is licensed under the GNU GPL, Version 2 or later.

FarmHash is licensed under the MIT license.

### Author

For the R package, [Dirk Eddelbuettel](https://github.com/eddelbuettel).

For everything pertaining to `FarmHash`, Geoff Pike and [contributors](https://github.com/google/farmhash/graphs/contributors).
