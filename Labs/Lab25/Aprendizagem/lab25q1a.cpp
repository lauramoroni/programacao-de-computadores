#include <iostream>
using namespace std;

int faixa(int*, int*, int);

int main() {
	int vet[] = { 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0 , 0, 0, 0, 0};
	int tam = sizeof(vet) / 4;
	
	int zero = faixa(vet, vet + tam, 0);

	int um = faixa(vet, vet + tam, 1);

	cout << "Zeros: " << zero << endl;
	cout << "Uns: " << um << endl;

	return 0;
}

int faixa(int* inicio, int* fim, int num) {
	int cont = 0;

	for (int *i = inicio; i < fim; i++) {
		if (*i == num) {
			cont++;
		}
	}

	return cont;
}