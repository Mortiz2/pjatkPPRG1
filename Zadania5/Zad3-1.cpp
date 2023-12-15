#include <iostream>

using namespace std;

const double PI = 3.14159265358979323846;

double obliczPoleKwadratu() {
    double bok;
    cout << "Podaj dlugosc boku kwadratu: ";
    cin >> bok;
    return bok * bok;
}

double obliczPoleProstokata() {
    double dlugosc, szerokosc;
    cout << "Podaj dlugosc prostokata: ";
    cin >> dlugosc;
    cout << "Podaj szerokosc prostokata: ";
    cin >> szerokosc;
    return dlugosc * szerokosc;
}

double obliczPoleKola() {
    double promien;
    cout << "Podaj promien kola: ";
    cin >> promien;
    return PI * promien * promien;
}

double obliczPoleTrojkata() {
    double podstawa, wysokosc;
    cout << "Podaj dlugosc podstawy trojkata: ";
    cin >> podstawa;
    cout << "Podaj wysokosc trojkata: ";
    cin >> wysokosc;
    return 0.5 * podstawa * wysokosc;
}

int main() {
    char wybor;

    do {
        cout << "Wybierz figure geometryczna:\n";
        cout << "1. Kwadrat\n";
        cout << "2. Prostokat\n";
        cout << "3. Kolo\n";
        cout << "4. Trojkat\n";
        cout << "5. Wyjdz\n";
        cout << "Wybor: ";
        cin >> wybor;

        if (wybor == '1') {
            cout << "Pole kwadratu: " << obliczPoleKwadratu() << "\n";
        } else if (wybor == '2') {
            cout << "Pole prostokata: " << obliczPoleProstokata() << "\n";
        } else if (wybor == '3') {
            cout << "Pole kola: " << obliczPoleKola() << "\n";
        } else if (wybor == '4') {
            cout << "Pole trojkata: " << obliczPoleTrojkata() << "\n";
        } else if (wybor != '5') {
            cout << "Nieprawidlowy wybor. Sprobuj ponownie.\n";
        }

    } while (wybor != '5');

    cout << "Koniec programu.\n";
    return 0;
}