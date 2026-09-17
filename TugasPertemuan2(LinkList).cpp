#include <iostream>
using namespace std;

struct mhs {
    int nilai;
    mhs* next;
};

int main() {
    system("cls");

    mhs* head = nullptr;
    mhs* tail = nullptr;
    mhs* temp;
    mhs* node;
    mhs* hapus;

    int data[10] = {100, 92, 45, 87, 71, 99, 95, 60, 55, 88};

    for (int i = 0; i < 10; i++) {
        node = new mhs();
        node->nilai = data[i];
        node->next = nullptr;

        if (head == nullptr) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    cout << "Data awal:\n";
    temp = head;

    while (temp != nullptr) {
        cout << temp->nilai << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n\n";


    node = new mhs();
    node->nilai = 70;
    node->next = head;
    head = node;

    cout << "tambah 70 di depan:\n";
    temp = head;

    while (temp != nullptr) {
        cout << temp->nilai << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n\n";


    node = new mhs();
    node->nilai = 50;
    node->next = nullptr;

    tail->next = node;
    tail = node;

    cout << "tambah 50 di belakang: \n";
    temp = head;

    while (temp != nullptr) {
        cout << temp->nilai << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n\n";


    temp = head;

    while (temp != nullptr && temp->nilai != 45) {
        temp = temp->next;
    }

    if (temp != nullptr) {
        node = new mhs();
        node->nilai = 0;
        node->next = temp->next;
        temp->next = node;
    }

    cout << "tambah 0 setelah 45:\n";
    temp = head;

    while (temp != nullptr) {
        cout << temp->nilai << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n\n";


    temp = head;

    while (temp != nullptr && temp->nilai != 99) {
        temp = temp->next;
    }

    if (temp != nullptr) {
        hapus = temp;

        if (temp == head) {
            head = head->next;
        } else {
            temp = head;

            while (temp->next != hapus) {
                temp = temp->next;
            }

            temp->next = hapus->next;
        }

        delete hapus;
    }

    cout << "hapus 99:\n";
    temp = head;

    while (temp != nullptr) {
        cout << temp->nilai << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n\n";


    temp = head;

    while (temp != nullptr && temp->nilai != 60) {
        temp = temp->next;
    }

    if (temp != nullptr) {
        hapus = temp;

        if (temp == head) {
            head = head->next;
        } else {
            temp = head;

            while (temp->next != hapus) {
                temp = temp->next;
            }

            temp->next = hapus->next;
        }

        delete hapus;
    }

    cout << "hapus 60:\n";
    temp = head;

    while (temp != nullptr) {
        cout << temp->nilai << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}