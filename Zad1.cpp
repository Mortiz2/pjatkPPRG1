#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Podaj zakres (od do): ";
    cin >> x >> y;

    for (int i = x; i <= y; i++) {
        bool czyPierwsza = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                czyPierwsza = false;
                break;
            }
        }
        if (czyPierwsza)
            cout << i << ", ";
    }
    return 0;
}