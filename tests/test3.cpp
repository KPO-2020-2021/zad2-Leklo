#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"


TEST_CASE("Mnozenie 1") {
    LZespolona x, y, z;
    
    x.re = 1;
    x.im = -2;

    y.re = 3;
    y.im = 2;

    z.re = 7;
    z.im = -4;
   
    CHECK(x*y == z);
}

TEST_CASE("Mnozenie 2") {
    LZespolona x, y, z;
    
    x.re = 67;
    x.im = -4;

    y.re = 15;
    y.im = -9;

    z.re = 969;
    z.im = -663;
   
    CHECK(x*y == z);
}

TEST_CASE("Mnozenie 3") {
    LZespolona x, y, z;
    
    x.re = 2;
    x.im = 2;

    y.re = 2;
    y.im = 2;

    z.re = 0;
    z.im = 8;
   
    CHECK(x*y == z);
}
TEST_CASE("Mnozenie 4") {
    LZespolona x, y, z;
    
    x.re = 1.6;
    x.im = 2.2;

    y.re = 5.2;
    y.im = 2.7;

    z.re = 2.38;
    z.im = 15.76;
   
    CHECK(x*y == z);
}
TEST_CASE("Mnozenie 5") {
    LZespolona x, y, z;
    
    x.re = 1;
    x.im = -1;

    y.re = 0;
    y.im = 0;

    z.re = 0;
    z.im = 0;
   
    CHECK(x*y == z);
}
TEST_CASE("Mnozenie 6") {
    LZespolona x, y, z;
    
    x.re = 2.2;
    x.im = 4.4;

    y.re = 0;
    y.im = 2;

    z.re = -8.8;
    z.im = 4.4;
   
    CHECK(x*y == z);
}
TEST_CASE("Mnozenie 7") {
    LZespolona x, y, z;
    
    x.re = 1.8;
    x.im = -3.4;

    y.re = 1;
    y.im = 0;

    z.re = 1.8;
    z.im = -3.4;
   
    CHECK(x*y == z);
}
TEST_CASE("Mnozenie 8") {
    LZespolona x, y, z;
    
    x.re = 6.9;
    x.im = -4.2;

    y.re = 1;
    y.im = 1;

    z.re = 11.1;
    z.im = 2.7;
   
    CHECK(x*y == z);
}
