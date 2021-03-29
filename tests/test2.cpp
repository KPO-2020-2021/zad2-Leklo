#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"

TEST_CASE("Dzielenie przez skalar 1") {
    LZespolona x, y;
    double t = 2;
    
    x.re = 8;
    x.im = 6;

    y.re = 4;
    y.im = 3;
   
    CHECK(x/t == y);
}

TEST_CASE("Dzielenie przez skalar 2") {
    LZespolona x, y;
    double t = 5;
    
    x.re = 10;
    x.im = 15;

    y.re = 2;
    y.im = 3;
   
    CHECK(x/t == y);
}

TEST_CASE("Dzielenie przez skalar 3") {
    LZespolona x, y;
    double t = 4;
    
    x.re = 6;
    x.im = -11;

    y.re = 1.5;
    y.im = -2.75;
   
    CHECK(x/t == y);
}
TEST_CASE("Dzielenie przez skalar 4") {
    LZespolona x, y;
    double t = 3;
    
    x.re = 5;
    x.im = 2;

    y.re = 1.6666;
    y.im = 0.6666;
   
    CHECK(x/t == y);
}
TEST_CASE("Dzielenie przez skalar przez zero") {
    LZespolona x;
    double t = 0;
    
    x.re = 2;
    x.im = 2;
 
   WARN_THROWS(x/t);
}
