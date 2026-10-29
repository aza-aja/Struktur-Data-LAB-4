#include <iostream>

using namespace std;

int main() {
    system("cls");
    int data[] = {5, 2, 4, 1,8};
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++)
        if (data[j] > data [j + 1]) {
            swap (data[j], data[j + 1]);
        }
    }

    cout << "Hasil bubble Sort : ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    return 0;
}