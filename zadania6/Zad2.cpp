#include <iostream>
#include <cmath>

using namespace std;

// Powinno się dać uwzględnić wielokrotne przejście przez menu i wyświetlanie danych
// Należy wtedy umieścić główną część programu w pętli.

// 1
struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

// 2
bool porownajOsoby(const Osoba& a, const Osoba& b) {
    if (a.nazwisko != b.nazwisko) {
        return a.nazwisko < b.nazwisko;
    } else if (a.imie != b.imie) {
        return a.imie < b.imie;
    } else {
        return a.wiek < b.wiek;
    }
}

void sortujOsoby(std::vector<Osoba>& osoby) {
    sort(osoby.begin(), osoby.end(), porownajOsoby);
}

// 3

void wyswietlOsoby(const vector<Osoba>& osoby, int indeksA, int indeksB) {
    if (indeksA < 0) indeksA = 0;
    if (indeksB >= static_cast<int>(osoby.size())) indeksB = osoby.size() - 1;

    for (int i = indeksA; i <= indeksB; ++i) {
        cout << "Imie: " << osoby[i].imie << ", Nazwisko: " << osoby[i].nazwisko << ", Wiek: " << osoby[i].wiek << endl;
    }
}

// 4

void wyswietlOsobyNieStarsze(const vector<Osoba>& osoby, int maksymalnyWiek) {
    for (const auto& osoba : osoby) {
        if (osoba.wiek <= maksymalnyWiek) {
            cout << "Imie: " << osoba.imie << ", Nazwisko: " << osoba.nazwisko << ", Wiek: " << osoba.wiek << endl;
        }
    }
}

// 5

vector<Osoba> stworzTabliceOsob(int liczbaOsob) {
    vector<Osoba> osoby;
    for (int i = 0; i < liczbaOsob; ++i) {
        Osoba osoba;
        cout << "Podaj dane dla osoby " << i + 1 << ":\n";
        cout << "Imie: ";
        cin >> osoba.imie;
        cout << "Nazwisko: ";
        cin >> osoba.nazwisko;
        cout << "Wiek: ";
        cin >> osoba.wiek;
        osoby.push_back(osoba);
    }
    return osoby;
}

// 6

void glowneMenu() {
    vector<Osoba> osoby;

    while (true) {
        cout << "\nMenu główne:\n";
        cout << "1. Stworz nowa tablice osob\n";
        cout << "2. Wyswietl wszystkie osoby\n";
        cout << "3. Wyswietl wybrane osoby\n";
        cout << "4. Wyswietl osoby nie starsze niz...\n";
        cout << "5. Zakoncz program\n";
        cout << "Wybor: ";

        int opcja;
        cin >> opcja;

        switch (opcja) {
            case 1: {
                int liczbaOsob;
                cout << "Podaj liczbe osob: ";
                cin >> liczbaOsob;
                osoby = stworzTabliceOsob(liczbaOsob);
                sortujOsoby(osoby);
                break;
            }
            case 2:
                wyswietlOsoby(osoby, 0, osoby.size() - 1);
                break;
            case 3: {
                int indeksA, indeksB;
                cout << "Podaj indeks A: ";
                cin >> indeksA;
                cout << "Podaj indeks B: ";
                cin >> indeksB;
                wyswietlOsoby(osoby, indeksA, indeksB);
                break;
            }
            case 4: {
                int maksymalnyWiek;
                cout << "Podaj maksymalny wiek: ";
                cin >> maksymalnyWiek;
                wyswietlOsobyNieStarsze(osoby, maksymalnyWiek);
                break;
            }
            case 5:
                cout << "Koniec programu.\n";
                return;
            default:
                cout << "Nieprawidlowy wybor. Sprobuj ponownie.\n";
        }
    }
}

int main() {
    glowneMenu();
    return 0;
}