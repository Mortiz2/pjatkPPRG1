#include <iostream>
#include <ctime>
using namespace std;


int main() {
    srand(time(0));

    int rundy;
    cout << "Ile rund: ";
    cin >> rundy;

    for (int i = 0; i < rundy; i++) {
        int output = (rand() % 3) + 1;

        int input;
        cout << "Wybierz jedno: " << endl
             << "[1] Kamień" << endl
             << "[2] Papier" << endl
             << "[3] Nożyce" << endl;
        cin >> input;

        cout << "Komputer wybrał ";
        if (output == 1)
            cout << "kamień" << endl;
        if (output == 2)
            cout << "papier" << endl;
        if (output == 3)
            cout << "nożyce" << endl;

        if (output == input)
            cout << "remis" << endl;
        if (output - input == -1 || output - input == 2)
            cout << "Wygrałeś" << endl;
        if (output - input == 1 || output - input == -2)
            cout << "Przegrałeś" << endl;
    }
    return 0;
}
//Win
//
//Kamień - papier = -1
//Papier - nożyce = -1
//Nożyce - kamień = 2
//
//Loose
//
//Papier - kamień = 1
//Nożyce - papier = 1
//Kamień - nożyce = -2