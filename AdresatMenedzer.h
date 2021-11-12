#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
//    MetodyPomocnicze metodyPomocnicze;
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    void wyswietlDaneAdresata(Adresat adresat);
public:

    AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika){
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };

    int dodajAdresata(int idZalogowanegoUzytkownika);
    int usunAdresata();
    void edytujAdresata();
    int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(int i);
    int podajIdWybranegoAdresata();
    void zaktualizujDaneWybranegoAdresata(vector <Adresat> adresaci, int idEdytowanegoAdresata);
};

#endif
