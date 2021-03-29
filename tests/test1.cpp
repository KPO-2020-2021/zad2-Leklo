#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"

TEST_CASE("Dodawanie 1"){
    LZespolona x, y, z;

    x.re = 2;
    x.im = 1;

    y.re = 4;
    y.im = 1;

    z.re = 6;
    z.im = 2;
    
    CHECK(x+y == z);
}
TEST_CASE("Dodawanie 2"){
    LZespolona x, y, z;

    x.re = 0;
    x.im = 0;

    y.re = 0;
    y.im = 0;

    z.re = 0;
    z.im = 0;
    
    CHECK(x+y == z);
}
TEST_CASE("Dodawanie 3"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 10;

    y.re = 0.0;
    y.im = 4.0;

    z.re = 1;
    z.im = 14;
    
    CHECK(x+y == z);
}
TEST_CASE("Dodawanie 4"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0.0001;
    y.im = 0.00000001;

    z.re = 1.0001;
    z.im = 1;
    
    CHECK(x+y == z);
}
TEST_CASE("Dodawanie 5"){
    LZespolona x, y, z;

    x.re = 0.00003;
    x.im = 0.00009;

    y.re = 0.00007;
    y.im = 0.00001;

    z.re = 0.0001;
    z.im = 0.0001;
    
    CHECK(x+y == z);
}
TEST_CASE("Dodawanie += 1"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 2;

    y.re = 2;
    y.im = 3;

    z.re = 3;
    z.im = 5;
    
    CHECK((x+=y)  == z);
}