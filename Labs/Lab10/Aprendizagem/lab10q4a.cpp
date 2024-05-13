#include <iostream>
using namespace std;

int main() {
    int vet[5] = { 10, 20, 30, 40, 50 };

    for (int i = 0; i < 5; i++) {
        vet[i] = 60;
        cout << vet[i] << " ";
    }

    return 0;
}