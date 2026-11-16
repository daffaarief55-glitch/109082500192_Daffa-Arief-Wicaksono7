
#include <iostream>
#include "stack3.h"

using namespace std;

void createStack(Stack &S) {
    S.Top = 0;
}

void push(Stack &S, infotype X) {
    if (S.Top < 20) {
        S.info[S.Top] = X;
        S.Top++;
    }
}

infotype pop(Stack &S) {
    if (S.Top > 0) {
        S.Top--;
        return S.info[S.Top];
    }
    return -1;
}

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

void getInputStream(Stack &S) {
    char input;

    while (cin.get(input) && input != '\n') {
        if (input >= '0' && input <= '9') {
            push(S, input - '0');
        }
    }
}
