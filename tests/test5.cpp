#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"


TEST_CASE("Odejmowanie 1") {
    LZespolona x, y, z;
    
    x.re = 5;
    x.im = -5;

    y.re = 1;
    y.im = 1;

    z.re = 4;
    z.im = -6;
   
    CHECK(x-y == z);
}

TEST_CASE("Odejmowanie 2") {
    LZespolona x, y, z;
    
    x.re = 6.2;
    x.im = 2.3;

    y.re = 4.25;
    y.im = 7.125;

    z.re = 1.95;
    z.im = -4.825;
   
    CHECK(x-y == z);
}

TEST_CASE("Odejmowanie 3") {
    LZespolona x, y, z;
    
    x.re = 5;
    x.im = 0;

    y.re = 2;
    y.im = 1;

    z.re = 3;
    z.im = -1;
   
    CHECK(x-y == z);
}
TEST_CASE("Odejmowanie 4"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0;
    y.im = 0;

    z.re = 1;
    z.im = 1;
    
    CHECK(x-y == z);
}
TEST_CASE("Odejmowanie 5"){
    LZespolona x, y, z;

    x.re = 0.0;
    x.im = 0.0;

    y.re = 1;
    y.im = -1;

    z.re = -1;
    z.im = 1;
    
    CHECK(x-y == z);
}
TEST_CASE("Odejmowanie 6"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0.000009;
    y.im = 0.000009;

    z.re = 0.99999;
    z.im = 0.99999;
    
    CHECK(x-y == z);
}
TEST_CASE("Odejmowanie"){
    LZespolona x, y, z;

    x.re = 0.000009;
    x.im = 0.000009;

    y.re = 0;
    y.im = 0;

    z.re = 0;
    z.im = 0;
    
    CHECK(x-y == z);
}
