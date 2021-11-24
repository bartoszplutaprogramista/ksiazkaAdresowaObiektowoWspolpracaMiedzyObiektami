#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

class PlikZUzytkownikami : public PlikTekstowy{
    const string NAZWA_PLIKU_Z_UZYTKOWNIKAMI;
    fstream plikTekstowy;
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
public:
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskamiWFunkcjiZapiszWszystkichUzytkownikow(vector <Uzytkownik> uzytkownicy, int i);
    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> uzytkownicy);
    PlikZUzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI) : NAZWA_PLIKU_Z_UZYTKOWNIKAMI(NAZWAPLIKUZUZYTKOWNIKAMI){};
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
};

#endif
