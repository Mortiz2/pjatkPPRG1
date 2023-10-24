#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Podaj zakres (od do): ";
    cin >> x >> y;

    for (int i = x; i <= y; i++) {
        int suma_i = 0;

        for (int dzielnik_i = 1; dzielnik_i < i; dzielnik_i++) {
            if (i % dzielnik_i == 0) {
                suma_i = suma_i + dzielnik_i;
            }
        }
        for (int j = i; j <= y; j++) {
            if (i == j) {
                continue;
            }
            int suma_j = 0;

            for (int dzielnik_j = 1; dzielnik_j < j; dzielnik_j++) {
                if (j % dzielnik_j == 0) {
                    suma_j = suma_j + dzielnik_j;
                }
            }
            if (suma_i == j && suma_j == i) {
                cout << i << ", " << j << endl;
            }
        }
    }
    return 0;
}