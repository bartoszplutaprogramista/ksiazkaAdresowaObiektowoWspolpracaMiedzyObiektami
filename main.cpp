#include <iostream>
#include <conio.h>
#include "KsiazkaAdresowa.h"
#include "UzytkownikMenedzer.h"

using namespace std;

int menu(KsiazkaAdresowa &ksiazkaAdresowa){
    while(true) {
        char wybranie;
        system("cls");
        cout << "1. Dodaj adresata" << endl;
        cout << "2. Wyswietl wszystkich adresatow" << endl;
        cout << "3. Usun adresata" << endl;
        cout << "4. Edytuj adresata" << endl;
        cout << "5. Wyloguj sie" << endl;

        cin >> wybranie;
        if(wybranie == '1') {
            ksiazkaAdresowa.dodajAdresata();
        } else if (wybranie == '2') {
            ksiazkaAdresowa.wyswietlWszystkichAdresatow();
        } else if (wybranie == '3') {
            ksiazkaAdresowa.usunAdresata();
        } else if (wybranie == '4') {
            ksiazkaAdresowa.edytujAdresata();
        } else if (wybranie == '5') {
            ksiazkaAdresowa.wylogowanieUzytkownika();
            return 0;
        }
    }
}

int main()
{
    char wybor;
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    while(true) {
        system("cls");
        cout << "MENU GLOWNE" << endl;
        cout << "1. Logowanie" << endl;
        cout << "2. Rejestracja" << endl;
        cout << "3. Zamknij program" << endl;
        cin >> wybor;

        if(wybor == '1') {
            ksiazkaAdresowa.logowanieUzytkownika();
            menu(ksiazkaAdresowa);
        } else if (wybor == '2') {
            ksiazkaAdresowa.rejestracjaUzytkownika();
        } else if (wybor == '3') {
            exit(0);
        }
    }
    return 0;
}
