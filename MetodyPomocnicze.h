#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H
#include <iostream>
#include <sstream>
#include <fstream>
#include <conio.h>
#include <algorithm>

//#include "PlikZAdresatami.h"

using namespace std;

class PlikZAdresatami;

class MetodyPomocnicze{
//    PlikZAdresatami &plikZAdresatami;
 //   const string NAZWA_PLIKU_Z_ADRESATAMI;
public:
//    friend class PlikZAdresatami;
//    MetodyPomocnicze(string nazwaPlikuZAdresatami) : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami){}

    static string konwerjsaIntNaString(int liczba);
    static string wczytajLinie();
    static int konwersjaStringNaInt(string liczba);
    static int wczytajLiczbeCalkowita();
    static int podajIdWybranegoAdresata();
    static char wczytajZnak();
//    static void usunWybranaLinieWPliku(int numerUsuwanejLinii);
    static void usunPlik(string nazwaPlikuZRozszerzeniem);
    static void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    static char wybierzOpcjeZMenuEdycja();
};

#endif
