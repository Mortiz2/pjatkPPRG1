#include <iostream>
#include <cmath>
using namespace std;

int pewnaLiczba = 4;

int czyJestSzescianem(int liczba) {
    if (liczba == pow(pewnaLiczba, 3)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x;
    cout << "Podaj liczbe";
    cin >> x;
    if (czyJestSzescianem(x) == 1) {
        cout << x << " jest sześcianem " << pewnaLiczba;
    }
    else {
        cout << x << " nie jest sześcianem " << pewnaLiczba;
    }


    return 0;
}