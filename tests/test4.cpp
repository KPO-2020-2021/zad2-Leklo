#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"


TEST_CASE("Dzielenie 1") {
    LZespolona x, y, z;
    
    x.re = 4;
    x.im = -2;

    y.re = 5;
    y.im = 1;

    z.re = 0.6923;
    z.im = -0.5385;
   
    CHECK(x/y == z);
}

TEST_CASE("Dzielenie 2") {
    LZespolona x, y, z;
    
    x.re = 2.2;
    x.im = 5.0/2.0;

    y.re = 1.25;
    y.im = -1.125;

    z.re = -0.0221;
    z.im = 1.98;
   
    CHECK(x/y == z);
}

TEST_CASE("Dzielenie 3") {
    LZespolona x, y, z;
    
    x.re = 2;
    x.im = 5;

    y.re = 6;
    y.im = 9;

    z.re = 0.4872;
    z.im = 0.1026;
   
    CHECK(x/y == z);
}
TEST_CASE("Dzielenie 4") {
    LZespolona x, y;
    
    x.re = 2.2;
    x.im = 1;

    y.re = 0;
    y.im = 0;
   
    WARN_THROWS(x/y);
}
TEST_CASE("Dzielenie 3") {
    LZespolona x, y, z;
    
    x.re = 2;
    x.im = 5;

    y.re = 6;
    y.im = 9;

    z.re = 0.4872;
    z.im = 0.1026;
   
    CHECK((x/=y) == z);
}