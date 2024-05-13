#include <iostream>
using namespace std;

int main()
{
	int tam;
	cout << "Quantos valores deseja guardar? ";
	cin >> tam;

	int* vet = new int[tam];

	cout << "Quais valores deseja guardar? ";
	for (int i = 0; i < tam; i++) {
		cin >> vet[i];
	}

	cout << "Os valores ";
	for (int i = 0; i < tam; i++) {
		cout << vet[i] << " ";
	}
	cout << "foram armazenados.\n";

	delete[] vet;
	return 0;
}