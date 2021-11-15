#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H
#include <iostream>
#include <sstream>
#include <fstream>
#include <conio.h>
#include <algorithm>

using namespace std;

class PlikZAdresatami;

class MetodyPomocnicze{
public:
    static string konwerjsaIntNaString(int liczba);
    static string wczytajLinie();
    static int konwersjaStringNaInt(string liczba);
    static int wczytajLiczbeCalkowita();
    static int podajIdWybranegoAdresata();
    static char wczytajZnak();
    static void usunPlik(string nazwaPlikuZRozszerzeniem);
    static void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    static char wybierzOpcjeZMenuEdycja();
};

#endif
