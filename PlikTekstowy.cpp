#include "PlikTekstowy.h"

/*
string pobierzNazwePlikuZAdresatami(){
    return NAZWA_PLIKU_Z_ADRESATAMI;
}

string pobierzNazwePlikuZUZytkownikami(){
    return NAZWA_PLIKU_Z_ADRESATAMI;
} */

string pobierzNazwePliku(){
    return NAZWA_PLIKU;
}

bool czyPlikJestPusty(){
    bool pusty = true;
    fstream plikTekstowy;
    plikTekstowy.open(pobierzNazwePliku().c_str(), ios::app);

    plikTekstowy.seekg(0, ios::end);
    if (plikTekstowy.tellg() == 0)
        return true;
    else
        return false;
    plikTekstowy.close();
}
