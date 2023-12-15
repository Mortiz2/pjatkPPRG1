#include <iostream>

using namespace std;

void pomnozMacierze(int A[][3], int B[][2], int wynik[][2], int wierszeA, int kolumnyA, int kolumnyB) {
    for (int i = 0; i < wierszeA; ++i) {
        for (int j = 0; j < kolumnyB; ++j) {
            wynik[i][j] = 0;
            for (int k = 0; k < kolumnyA; ++k) {
                wynik[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void wyswietlMacierz(int* macierz, int wiersze, int kolumny) {
    for (int i = 0; i < wiersze; ++i) {
        for (int j = 0; j < kolumny; ++j) {
            cout << *(macierz + i * kolumny + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int macierz1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int macierz2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int wynikMnozenia[2][2];

    cout << "Macierz 1:" << endl;
    wyswietlMacierz(&macierz1[0][0], 2, 3);
    cout << "\nMacierz 2:" << endl;
    wyswietlMacierz(&macierz2[0][0], 3, 2);

    pomnozMacierze(macierz1, macierz2, wynikMnozenia, 2, 3, 2);

    cout << "\nWynik mnożenia macierzy:" << endl;
    wyswietlMacierz(&wynikMnozenia[0][0], 2, 2);

    return 0;
}