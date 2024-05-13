#include <iostream>
using namespace std;

int main()
{
	int vet[10];
	cout << "Digite 10 valores: ";
	for (int i = 0; i < 10; i++)
	{
		cin >> vet[i];
	}

	int vetA[5], vetB[5], vetS[5];
	for (int i = 0; i < 5; i++) {
		vetA[i] = vet[i];
		vetB[i] = vet[i + 5];
		vetS[i] = vetA[i] + vetB[i];
	}

	// exibir dados
	
		cout << "Vetor A: ";
		for (int j = 0; j < 5; j++)
		{
			cout << vetA[j] << " ";
		}
		cout << "\nVetor B: ";
		for (int j = 0; j < 5; j++)
		{
			cout << vetA[j] << " ";
		}
		cout << "\nVetor S: ";
		for (int j = 0; j < 5; j++)
		{
			cout << vetA[j] << " ";
		}
	
	
	return 0;
}