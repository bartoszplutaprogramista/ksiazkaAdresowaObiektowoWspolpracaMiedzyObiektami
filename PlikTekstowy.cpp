#include "PlikTekstowy.h"

bool PlikTekstowy::czyPlikJestPusty(fstream &plikTekstowy){
//    fstream plikTekstowy;
    plikTekstowy.seekg(0, ios::end);
    if (plikTekstowy.tellg() == 0)
        return true;
    else
        return false;
}
