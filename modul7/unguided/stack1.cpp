
#include <iostream>
#include "stack1.h"

using namespace std;

// Membuat Stack kosong
void createStack(Stack &S) {
    S.Top = 0;
}

// Menambahkan data ke Stack
void push(Stack &S, infotype X) {
    if (S.Top < 20) {
        S.info[S.Top] = X;
        S.Top++;
    } else {
        cout << "Stack penuh!" << endl;
    }
}

// Mengambil data paling atas
infotype pop(Stack &S) {
    if (S.Top > 0) {
        S.Top--;
        return S.info[S.Top];
    } else {
        cout << "Stack kosong!" << endl;
        return -1;
    }
}

// Menampilkan isi Stack
void printInfo(Stack S) {
    if (S.Top == 0) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "[TOP] ";
        for (int i = S.Top - 1; i >= 0; i--) {
            cout << S.info[i] << " ";
        }
        cout << endl;
    }
}

// Membalik urutan Stack
void balikStack(Stack &S) {
    int i = 0;
    int j = S.Top - 1;

    while (i < j) {
        infotype temp = S.info[i];
        S.info[i] = S.info[j];
        S.info[j] = temp;

        i++;
        j--;
    }
}
