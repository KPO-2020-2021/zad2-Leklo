#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"
#include "WyrazenieZesp.hh"


TEST_CASE("Wyswietlanie 1") {
    LZespolona x;
    
    x.re = 5;
    x.im = 6;
    std::cout << "LZespolona:" << x << std::endl;
   
}
TEST_CASE("Wyswietlanie 1") {
    WyrazenieZesp x;
    x.Arg1.re = 5; x.Arg1.im = 6;
    x.Arg2.re = 3; x.Arg2.im = -7;
    x.Op = Op_Dodaj;

    
    std::cout << "Wyrazenie LZespolona:\t" << x << std::endl;
   
}
TEST_CASE("Wczytywanie 1") {
    LZespolona x,z;
    std::istringstream in("(24-16i)");
    in >> x;
    z.re = 24; z.im = -16;
   CHECK(x == z);
}
TEST_CASE("Liczba Zespolona 1") {
    LZespolona z;
    double x;
    z.re = 3;
    z.im = 1;

    x = 0.3216;

   CHECK(abs(Arg(z) - x <= 0.001));
}



