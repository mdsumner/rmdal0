
<!-- README.md is generated from README.Rmd. Please edit that file -->

<!-- badges: start --> [![Travis build
status](https://travis-ci.org/mdsumner/rmdal0.svg?branch=master)](https://travis-ci.org/mdsumner/rmdal0)
[![AppVeyor build
status](https://ci.appveyor.com/api/projects/status/github/mdsumner/rmdal0?branch=master&svg=true)](https://ci.appveyor.com/project/mdsumner/rmdal0)
<!-- badges: end -->

# rmdal0

An attempt, minimal proof of concept for an R package using the [MDAL
library](https://www.mdal.xyz/).

See also <https://github.com/lutraconsulting/MDAL/issues/42> which I
will speak to once I get some functionality working.

## setup MDAL

``` bash
git clone https://github.com/lutraconsulting/MDAL.git
cd MDAL
mkdir build;cd build
## DONE AS ROOT, BECAUSE otherwise fail for some reason
cmake -DCMAKE_BUILD_TYPE=Rel -DENABLE_TESTS=ON  ..
make
make all install
```

Run the init thing for the C++ in this
package:

``` r
tools::package_native_routine_registration_skeleton("../rmdal0", "src/init.c",character_only = FALSE)
```

Run the package, currently only calls
[MDAL\_Status()](https://github.com/lutraconsulting/MDAL/blob/0.3.3/mdal/mdal.cpp)
as a minimal test.

All going well it should return the value `2` and print out “mdalinfo
0”.

``` r
rmdal0:::rmdal0()
#> mdalinfo 0
#> [1] 2
```

-----

Please note that the ‘rmdal0’ project is released with a [Contributor
Code of
Conduct](https://github.com/mdsumner/rmdal0/blob/master/CODE_OF_CONDUCT.md).
By contributing to this project, you agree to abide by its terms.
