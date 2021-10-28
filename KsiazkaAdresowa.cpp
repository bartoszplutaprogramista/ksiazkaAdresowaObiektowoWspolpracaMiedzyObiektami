#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika(){
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow(){
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika(){
    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany()){
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}

int KsiazkaAdresowa::dodajAdresata(){
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()){
        adresatMenedzer->dodajAdresata(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
    else {
        cout << "Aby dodac adresata, nalezy sie najpierw zalogowac" << endl;
        system("pause");
    }

}

/*
void KsiazkaAdresowa::wylogowanieUzytkownika(int idZalogowanegoUzytkownika){
    uzytkownikMenedzer.wylogowanieUzytkownika(idZalogowanegoUzytkownika);
    delete adresatMenedzer;
    adresatMenedzer = NULL;
} */
void KsiazkaAdresowa::wylogowanieUzytkownika(){
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow(){
    adresatMenedzer->wyswietlWszystkichAdresatow();
}

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika(){
    uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}
