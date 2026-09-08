#include <iostream>
using namespace std;

int main() {
    system("cls");
    int arr[3][3][4];
    int angka = 2;

    for (int lapis = 0; lapis < 3; lapis++) {
        for (int baris = 0; baris < 3; baris++) {
            for (int kolom = 0; kolom < 4; kolom++) {
                arr[lapis][baris][kolom] = angka;
                angka += 2;
            }
        }
    }

    for (int lapis = 0; lapis < 3; lapis++) {
        cout << "Lapis " << lapis + 1 << ":" << endl;

        for (int baris = 0; baris < 3; baris++) {
            for (int kolom = 0; kolom < 4; kolom++) {
                cout << arr[lapis][baris][kolom] << "\t";
            }
            cout << endl;
        }

        cout << endl;
    }

    return 0;
}