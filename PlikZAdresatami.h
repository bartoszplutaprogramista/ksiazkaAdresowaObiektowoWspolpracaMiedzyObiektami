#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami{
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;
    int numerOstatniegoAdresata;
    bool czyPlikJestPusty(fstream &plikTekstowy);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);

public:
    PlikZAdresatami(string nazwaPlikuZAdresatami) : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami){
        idOstatniegoAdresata = 0;
    }
    bool dopiszAdresataDoPliku(vector <Adresat> adresaci);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    void ustawIdOstatniegoAdresata(int numerOstatniegoAdresata);
    string pobierzNazwePlikuZAdresatami();
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(vector <Adresat> adresaci);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskamiWMetodzieEdytujAdresata(vector <Adresat> adresaci, int i);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void usunWybranaLinieWPliku(int numerUsuwanejLinii);
    void edytujWybranaLinieWPliku(int numerEdytowanejLinii, string liniaZDanymiAdresataOddzielonePionowymiKreskami);
};

#endif
