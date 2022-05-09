#ifndef PYTANIE_H
#define PYTANIE_H
#include <iostream>

class Pytanie
{
    public:
       std::string trescPytania, a, b, c, poprawna, odpowiedz;
       int punkty;
       int nr_pytania;

       void wczytajPytanie();
       void zadajPytanie();
       void sprawdz();
};


#endif // PYTANIE_H
