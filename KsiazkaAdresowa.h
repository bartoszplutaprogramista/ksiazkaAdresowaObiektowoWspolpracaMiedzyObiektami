#include <iostream>
#include <vector>
#include "Uzytkownik.h"

using namespace std;

class KsiazkaAdresowa{
    string nazwaPlikuZUzytkownikami;
    string nazwaPlikuZAdresatami;
    string nazwaTymczasowegoPlikuZAdresatami;
    vector <Uzytkownik> uzytkownicy;
public:
    void rejestracjaUzytkownika();
};
