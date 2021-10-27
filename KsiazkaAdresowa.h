#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer *adresatMenedzer;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
public:
    KsiazkaAdresowa(string NazwaPlikuZUzytkownikami, string NazwaPlikuZAdresatami)
    : uzytkownikMenedzer(NazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(NazwaPlikuZAdresatami){
//        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    adresatMenedzer = NULL;
    };
    ~KsiazkaAdresowa(){
        delete adresatMenedzer;
        adresatMenedzer = NULL;
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    int dodajAdresata();
    void wyswietlWszystkichAdresatow();
    int pobierzIdZalogowanegoUzytkownika();
    void wylogowanieUzytkownika(int idZalogowanegoUzytkownika);
};

#endif
