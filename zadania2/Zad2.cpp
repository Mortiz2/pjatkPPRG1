#include <iostream>
using namespace std;

int main() {
    string haslo = "SezamieOtwórzSię";
    string guess;
    while (1 == 1) {
        cout << "podaj hasło: ";
        cin >> guess;
        if (guess == haslo) {
            cout << "BRAWO!";
            return 0;
        }
        else {
            cout << "Spróbuj jeszcze raz" << endl;
        }
    }
}