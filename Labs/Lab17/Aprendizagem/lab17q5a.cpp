#include <iostream>
using namespace std;

int main()
{
	int quadrado_soma = 0;
	int soma_quadrado = 0;

	// soma dos quadrados
	for (int i = 1; i <= 100; i++) {
		soma_quadrado += pow(i, 2);
	}

	// quadrado da soma
	int soma = 0;
	for (int i = 1; i <= 100; i++) {
		soma += i;
	}
	quadrado_soma = pow(soma, 2);

	int diferenca = quadrado_soma - soma_quadrado;
	cout << diferenca << endl;

	return 0;
}