#include <iostream>
using namespace std;

int* func(int*, int*, int, int);

int main() {
    int a[4] = { 1, 4, 5, 7 };
    int b[4] = { 3, 2, 8, 9 };

    int tamA = sizeof(a) / sizeof(a[0]);
    int tamB = sizeof(b) / sizeof(b[0]);

    int* c = func(a, b, tamA, tamB);

    int tamC = tamA + tamB;

    for (int i = 0; i < tamC; ++i) {
        cout << c[i] << " ";
    }

    delete[] c;
}

int* func(int* a, int* b, int tamA, int tamB) {
    int tamC = tamA + tamB;
    int* c = new int[tamC];

    for (int i = 0; i < tamA; i++) {
        c[i] = a[i];
    }
    for (int i = 0; i < tamB; i++) {
        c[tamA + i] = b[i];
    }

    return c;
}
