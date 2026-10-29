#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");
    string data[100];
    int n = 5;

    for (int i = 0; i < n; i++) {
        cout << "Kata ke-" << i + 1 << " : ";
        cin >> data[i];
    }

    cout << "\nData awal : ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < n; i++) {
        string key = data[i];
        int j = i - 1;

        cout << "\nlangkah " << i << endl << "key = " << key << endl;

        while (j >= 0 && data[j] > key) {
            cout << "geser " << data[j] << " dari indeks " << j << " ke indeks " << j + 1 << endl;
            data[j + 1] = data[j];
            j--;
        }

        data[j + 1] = key;
        cout << "sisipkan " << key << " di indeks " << j + 1 << endl;

        cout << "hasil sementara : ";
        for (int k = 0; k < n; k++) {
            cout << data[k] << " ";
        }
        cout << endl;
    }

    cout << "\nhasil Insertion Sort : ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    return 0;
}