#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"
#include "WyrazenieZesp.hh"
#include "Statystyki.hh"
#include "BazaTestu.hh"


TEST_CASE("Statystyka 1") {
  BazaTestu BazaT;
  int p=0;
  BazaT.IloscPytan = 4;
  WyrazenieZesp x;
  LZespolona y, z;

    /* Tu jest poprawna odpowiedz*/
    x.Arg1.re = 2; x.Arg1.im = 1;
    x.Arg2.re = 1; x.Arg2.im = 11;
    x.Op = Op_Dodaj;
    y = Oblicz(x);
    z.re = 3; z.im = 12;
    p = porownanie(p, z, y);

    /* Tu jest poprawna odpowiedz*/
    x.Arg1.re = 2.51; x.Arg1.im = 23.22;
    x.Arg2.re = 15.66; x.Arg2.im = 99.767;
    x.Op = Op_Odejmij;
    y = Oblicz(x);
    z.re = -13.15; z.im = -76.55;
    p = porownanie(p, z, y);


    /* Tu jest poprawna odpowiedz*/
    x.Arg1.re = (1.0/10.0); x.Arg1.im = (-2.0/8.0);
    x.Arg2.re = (4.0/100.0); x.Arg2.im = (-1.0/50.0);
    x.Op = Op_Mnoz;
    y = Oblicz(x);
    z.re = -.001; z.im = -0.012;
    p = porownanie(p, z, y);

    /* Tu jest niepoprawna odpowiedz*/
    x.Arg1.re = 2.51; x.Arg1.im = 23.22;
    x.Arg2.re = 15.66; x.Arg2.im = 99.767;
    x.Op = Op_Dziel;
    y = Oblicz(x);
    z.re = 0.231; z.im = 0.0111;
    p = porownanie(p, z, y);
/* Maja byc 3 dobre odpowiedzi jedna zla*/
statystyka(p, BazaT);
}

