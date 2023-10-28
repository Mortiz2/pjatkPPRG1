#include <iostream>
#include <ctime>
using namespace std;


int main() {
    int a1, r, n, an, S;
    cout << "Podaj pierwszy element: ";
    cin >> a1;
    cout << "Podaj różnice: ";
    cin >> r;
    cout << "Podaj liczbę elementów: ";
    cin >> n;

    an = a1 + (n - 1) * r;

    S = ((a1 + an) / 2) * n;

    cout << "suma ciągu wynosi = " << S;

    return 0;
}