#include "MetodyPomocnicze.h"

string MetodyPomocnicze::konwerjsaIntNaString(int liczba){
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

string MetodyPomocnicze::wczytajLinie(){
    cin.clear();
    cin.sync();
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}

int MetodyPomocnicze::konwersjaStringNaInt(string liczba){
    int liczbaInt;
    istringstream iss(liczba);
    iss >> liczbaInt;

    return liczbaInt;
}

int MetodyPomocnicze::wczytajLiczbeCalkowita(){
    string wejscie = "";
    int liczba = 0;

    while (true)
    {
        cin.clear();
        cin.sync();
        getline(cin, wejscie);

        stringstream myStream(wejscie);
        if (myStream >> liczba)
            break;
        cout << "To nie jest liczba. Wpisz ponownie. " << endl;
    }
    return liczba;
}

int MetodyPomocnicze::podajIdWybranegoAdresata(){
    int idWybranegoAdresata = 0;
    cout << "Podaj numer ID Adresata: ";
    idWybranegoAdresata  = wczytajLiczbeCalkowita();

    cout << "idWybranegoAdresata w funkcji podaj: " << idWybranegoAdresata << endl;
    getch();
    return idWybranegoAdresata;
}

char MetodyPomocnicze::wczytajZnak(){
    string wejscie = "";
    char znak  = {0};

    while (true)
    {
        getline(cin, wejscie);

        if (wejscie.length() == 1)
        {
            znak = wejscie[0];
            break;
        }
        cout << "To nie jest pojedynczy znak. Wpisz ponownie." << endl;
    }
    return znak;
}

void MetodyPomocnicze::usunPlik(string nazwaPlikuZRozszerzeniem){
    if (remove(nazwaPlikuZRozszerzeniem.c_str()) == 0) {}
    else
        cout << "Nie udalo sie usunac pliku " << nazwaPlikuZRozszerzeniem << endl;
}

void MetodyPomocnicze::zmienNazwePliku(string staraNazwa, string nowaNazwa){
    if (rename(staraNazwa.c_str(), nowaNazwa.c_str()) == 0) {}
    else
        cout << "Nazwa pliku nie zostala zmieniona." << staraNazwa << endl;
}
