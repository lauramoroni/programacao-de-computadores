#include <iostream>
using namespace std;

int somaVetor(int[]);
int main()
{
	int vetor[5];
	cout << "Digite cinco valores: ";
	cin >> vetor[0] >> vetor[1] >> vetor[2] >> vetor[3] >> vetor[4];
	cout << "A soma do vetor é " << somaVetor(vetor);

	return 0;
}
int somaVetor(int vetor[])
{
	int soma = vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4];

	return soma;
}
