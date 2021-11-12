#include <iostream>
#include <conio.h>
#include "KsiazkaAdresowa.h"
#include "UzytkownikMenedzer.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
//    ksiazkaAdresowa.rejestracjaUzytkownika();
//  ksiazkaAdresowa.rejestracjaUzytkownika();
//    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();
//    ksiazkaAdresowa.dodajAdresata();
//    ksiazkaAdresowa.dodajAdresata();
//    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

//    ksiazkaAdresowa.usunAdresata();
//    ksiazkaAdresowa.dodajAdresata();
//    ksiazkaAdresowa.dodajAdresata();
//    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    ksiazkaAdresowa.edytujAdresata();
    ksiazkaAdresowa.wylogowanieUzytkownika();

    return 0;
}
