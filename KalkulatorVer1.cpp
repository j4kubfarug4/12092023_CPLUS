#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int liczba1 = 10;
    int liczba2 = 20;

    int dodawanie = liczba1 + liczba2;
    int odejmowanie = liczba1 - liczba2;
    int mnozenie = liczba1 * liczba2;
    float dzielenie = (float)liczba1 / (float)liczba2;
    float pierwiastekLiczba1 = sqrt(liczba1);
    float pierwiastekLiczba2 = sqrt(liczba2);
    double potegaLiczba1 = pow(liczba1, 2);
    double potegaLiczba2 = pow(liczba2, 2);

    cout << "Dodawanie = " << dodawanie << endl;
    cout << "Odejmowanie = " << odejmowanie << endl;
    cout << "Mnozenie = " << mnozenie << endl;
    cout << "Dzielenie = " << dzielenie << endl;
    cout << "Pierwiastek kwadratowy liczby1 = " << pierwiastekLiczba1 << endl;
    cout << "Pierwiastek kwadratowy liczby2 = " << pierwiastekLiczba2 << endl;
    cout << "Potega liczby1 = " << potegaLiczba1 << endl;
    cout << "Potega liczby2 = " << potegaLiczba2 << endl;

    system("pause");
    return 0;
}

/*
    Przestrzeń nazw: using namespace co to jest i dlaczego stosujemy
    Typy danych w C++, proste i złożone
    Typy proste: integer (int) - liczby całkowite, string - typ tekstowy, char - typ znakowy, float i double - liczby zmienno przecinkowe
*/