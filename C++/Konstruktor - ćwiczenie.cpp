#include <iostream>

using namespace std;

class Towar {
public:
    string nazwa;
    float wartosc, marza, vat, cena, marza2, cena2;

    void liczenie_wartosci() {

        cena = wartosc * vat / 100;
        marza2 = wartosc * marza / 100;
        cena2 = wartosc + marza2 + cena;
        cout << "Cena towaru " << nazwa << " wynosi: " << cena2 << " zl" << endl;
    }
    Towar() :nazwa("lodowka"), wartosc(1000), vat(23), marza(10) {
    }
};

int main()
{
    Towar a;
    a.liczenie_wartosci();
    return 0;
};