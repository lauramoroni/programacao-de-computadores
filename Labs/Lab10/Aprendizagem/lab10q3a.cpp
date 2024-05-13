#include <iostream>
using namespace std;

float calc(double vet[]);
int main()
{
	double vetor[3];
	cout << "Valor 1: ";
	cin >> vetor[0];
	cout << "Valor 2: ";
	cin >> vetor[1];
	cout << "Valor 3: ";
	cin >> vetor[2];

	cout << "Resultado: " << calc(vetor);

	return 0;
}
float calc(double vet[])
{
	return (vet[0] * vet[2]) - vet[1];
}