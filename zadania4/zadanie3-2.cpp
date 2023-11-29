#include <iostream>
#include <cmath>
using namespace std;

void obliczISumujCiągi(double a0, double r, int n) {
    double sumaArytmetyczna = (n * (2 * a0 + (n - 1) * r)) / 2;

    double sumaGeometryczna = 0;
    for (int i = 0; i < n; ++i) {
        sumaGeometryczna += a0 * pow(r, i);
    }

    cout << "Ciąg arytmetyczny: Suma = " << sumaArytmetyczna << endl;
    cout << "Ciąg geometryczny: Suma = " << sumaGeometryczna << endl;
}

int main() {
    double a0 = 2.0;
    double r = 3.0;
    int n = 200;

    obliczISumujCiągi(a0, r, n);

    return 0;
}