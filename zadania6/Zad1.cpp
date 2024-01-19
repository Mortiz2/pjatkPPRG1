#include <iostream>
#include <cmath>

using namespace std;

struct Punkt {
    double x;
    double y;
};

double obliczOdleglosc(const Punkt& punkt1, const Punkt& punkt2) {
    double roznicaX = punkt1.x - punkt2.x;
    double roznicaY = punkt1.y - punkt2.y;
    return sqrt(roznicaX * roznicaX + roznicaY * roznicaY);
}

int main() {

    Punkt punktA = {2, -3};
    Punkt punktB = {5.4, 7};

    double odleglosc = obliczOdleglosc(punktA, punktB);

    cout << "Odleglosc miedzy punktami A i B: " << odleglosc << endl;

    return 0;
}
