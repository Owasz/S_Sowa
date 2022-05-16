#include <iostream>
#include <algorithm>

using namespace std;


void email() {
    string imie, nazwisko;
    string mail = "@zs4.net";


    cout << "Podaj imie: " << endl;
    cin >> imie;

    cout << "Podaj nazwisko: " << endl;
    cin >> nazwisko;

    transform(imie.begin(), imie.end(), imie.begin(), ::tolower);
    transform(nazwisko.begin(), nazwisko.end(), nazwisko.begin(), ::tolower);

    imie.erase(3, 10);
    nazwisko.erase(3, 10);

    cout << "Twoj email to: " + imie + nazwisko + mail << endl;

}

int main()
{

    email();

}