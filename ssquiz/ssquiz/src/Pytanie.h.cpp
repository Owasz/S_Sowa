#include "Pytanie.h"
#include <iostream>
#include <fstream>

using namespace std;

    void Pytanie::wczytajPytanie(){
        fstream plik;
        plik.open("quiz.txt");

        if (plik.good()==0) cout << "Brak pliku";
        string linia;
            int nr_linii = (nr_pytania+5)-1
        while (getline(plik, linia)) {
        cout << linia << endl;
        }
        plik.close();
    }

    void Pytanie::zadajPytanie() {

    }

    void Pytanie::sprawdz() {

    }
