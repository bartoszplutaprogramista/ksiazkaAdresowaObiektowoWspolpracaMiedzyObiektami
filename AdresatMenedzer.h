#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer{
    Adresat adresat;
    vector <Adresat> adresaci;
    int idOstatniegoAdresata;
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    void wyswietlDaneAdresata(Adresat adresat);
public:
    AdresatMenedzer(string NAZWAPLIKUZADRESATAMI, int IDOSTATNIEGOADRESATA = 0)
    : plikZAdresatami(NAZWAPLIKUZADRESATAMI), idOstatniegoAdresata(IDOSTATNIEGOADRESATA){};

    int dodajAdresata(int idZalogowanegoUzytkownika);
    void ustawIdOstatniegoAdresata(int noweIdOstatniegoAdresata);
    int pobierzIdOstatniegoAdresata();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
};
