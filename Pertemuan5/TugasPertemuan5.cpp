#include <iostream>
using namespace std;

int binarySearch(int data[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (data[mid] == target) {
            return mid;
        } else if (target < data[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    system("cls");
    int n, target;
    int nilai[100];

    cout << "Masukkan jumlah data: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Jumlah data harus antara 1 sampai 100" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nilai[j] > nilai[j + 1]) {
                int temp = nilai[j];
                nilai[j] = nilai[j + 1];
                nilai[j + 1] = temp;
            }
        }
    }

    cout << "\nData setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << nilai[i] << " ";
    }

    cout << "\nMasukkan nilai yang dicari: ";
    cin >> target;

    int index = binarySearch(nilai, n, target);

    if (index != -1) {
        cout << "Nilai ditemukan pada indeks " << index << endl;
    } else {
        cout << "Nilai tidak ditemukan" << endl;
    }

    return 0;
}