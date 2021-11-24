#include "PlikZUzytkownikami.h"

void PlikZUzytkownikami::dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik){
//    fstream plikTekstowy;
    string liniaZDanymiUzytkownika = "";
    plikTekstowy.open(NAZWA_PLIKU_Z_UZYTKOWNIKAMI.c_str(), ios::app);

    if (plikTekstowy.good() == true)
    {
        liniaZDanymiUzytkownika = zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(uzytkownik);

        if (czyPlikJestPusty() == true)
        {
            plikTekstowy << liniaZDanymiUzytkownika;
        }
        else
        {
            plikTekstowy << endl << liniaZDanymiUzytkownika ;
        }
    }
    else
        cout << "Nie udalo sie otworzyc pliku " << NAZWA_PLIKU_Z_UZYTKOWNIKAMI << " i zapisac w nim danych." << endl;
    plikTekstowy.close();
}

string PlikZUzytkownikami::zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik){
    string liniaZDanymiUzytkownika = "";
    liniaZDanymiUzytkownika += MetodyPomocnicze::konwerjsaIntNaString(uzytkownik.pobierzId())+ '|';
    liniaZDanymiUzytkownika += uzytkownik.pobierzLogin() + '|';
    liniaZDanymiUzytkownika += uzytkownik.pobierzHaslo() + '|';

    return liniaZDanymiUzytkownika;
}

string PlikZUzytkownikami::zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskamiWFunkcjiZapiszWszystkichUzytkownikow(vector <Uzytkownik> uzytkownicy, int i){
    string liniaZDanymiUzytkownika = "";
    liniaZDanymiUzytkownika += MetodyPomocnicze::konwerjsaIntNaString(uzytkownicy[i].pobierzId())+ '|';
    liniaZDanymiUzytkownika += uzytkownicy[i].pobierzLogin() + '|';
    liniaZDanymiUzytkownika += uzytkownicy[i].pobierzHaslo() + '|';

    return liniaZDanymiUzytkownika;
}

vector <Uzytkownik> PlikZUzytkownikami::wczytajUzytkownikowZPliku(){
    Uzytkownik uzytkownik;
//    fstream plikTekstowy;
    vector <Uzytkownik> uzytkownicy;
    string daneJednegoUzytkownikaOddzielonePionowymiKreskami = "";

    plikTekstowy.open(NAZWA_PLIKU_Z_UZYTKOWNIKAMI.c_str(), ios::in);

    if (plikTekstowy.good() == true)
    {
        while (getline(plikTekstowy, daneJednegoUzytkownikaOddzielonePionowymiKreskami))
        {
            uzytkownik = pobierzDaneUzytkownika(daneJednegoUzytkownikaOddzielonePionowymiKreskami);
            uzytkownicy.push_back(uzytkownik);
        }
        plikTekstowy.close();
    }
    return uzytkownicy;
}

Uzytkownik PlikZUzytkownikami::pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami){
    Uzytkownik uzytkownik;
    string pojedynczaDanaUzytkownika = "";
    int numerPojedynczejDanejUzytkownika = 1;

    for (int pozycjaZnaku = 0; pozycjaZnaku < daneJednegoUzytkownikaOddzielonePionowymiKreskami.length(); pozycjaZnaku++)
    {
        if (daneJednegoUzytkownikaOddzielonePionowymiKreskami[pozycjaZnaku] != '|')
        {
            pojedynczaDanaUzytkownika += daneJednegoUzytkownikaOddzielonePionowymiKreskami[pozycjaZnaku];
        }
        else
        {
            switch(numerPojedynczejDanejUzytkownika)
            {
            case 1:
                uzytkownik.ustawId(atoi(pojedynczaDanaUzytkownika.c_str()));
                break;
            case 2:
                uzytkownik.ustawLogin(pojedynczaDanaUzytkownika);
                break;
            case 3:
                uzytkownik.ustawHaslo(pojedynczaDanaUzytkownika);
                break;
            }
            pojedynczaDanaUzytkownika = "";
            numerPojedynczejDanejUzytkownika++;
        }
    }
    return uzytkownik;
}

void PlikZUzytkownikami::zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> uzytkownicy){
//    fstream plikTekstowy;
    string nazwaPlikuZUzytkownikami;
    string liniaZDanymiUzytkownika = "";
    int sizeOfVector = uzytkownicy.size();
    plikTekstowy.open(NAZWA_PLIKU_Z_UZYTKOWNIKAMI.c_str(), ios::out);

    if (plikTekstowy.good() == true)
    {
        for (int i=0; i<sizeOfVector; i++)
        {
            liniaZDanymiUzytkownika = zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskamiWFunkcjiZapiszWszystkichUzytkownikow(uzytkownicy, i);

            if (i == sizeOfVector-1)
            {
               plikTekstowy << liniaZDanymiUzytkownika;
            }
            else
            {
                plikTekstowy << liniaZDanymiUzytkownika << endl;
            }
            liniaZDanymiUzytkownika = "";
        }
    }
    else
    {
        cout << "Nie mozna otworzyc pliku " << nazwaPlikuZUzytkownikami << endl;
    }
    plikTekstowy.close();
}
