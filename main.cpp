#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
//    int idZalogowanegoUzytkownika = 0;
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
//    ksiazkaAdresowa.rejestracjaUzytkownika();
//    ksiazkaAdresowa.rejestracjaUzytkownika();
//    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
//    idZalogowanegoUzytkownika = ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.logowanieUzytkownika();
//    idZalogowanegoUzytkownika = ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika();
//    ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika();
//    cout << "IdZalogowanegoUzytkownika: " << idZalogowanegoUzytkownika << endl;
    cout << "IdZalogowanegoUzytkownika w funkcji main: " << ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() << endl;
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
//    ksiazkaAdresowa.wylogowanieUzytkownika(idZalogowanegoUzytkownika);
    ksiazkaAdresowa.wylogowanieUzytkownika();

    return 0;
}
