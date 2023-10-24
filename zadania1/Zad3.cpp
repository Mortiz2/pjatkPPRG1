#include <iostream>
using namespace std;

int main() {
    {
        int N, x = 0;
        int y = 1;
        cout << "Podaj N: ";
        cin >> N;

        for (int i = 0; i < N; i++) {
            int wyraz = x + y;
            y = x;
            x = wyraz;
        }
        cout << x;
    }
    return 0;
}