#include <iostream>
using namespace std;

int main()
{
	const char* meses[] = { "Janeiro", "Fevereiro", "Mar�o", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro" };
	int vet[12];
	int soma = 0;

	cout << "Digite o n�mero de livros vendidos:\n";

	for (int i = 0; i < 12; i++) {
		cout << meses[i] << ": ";
		cin >> vet[i];
		cout << "\n";

		soma += vet[i];
	}

	cout << "Foram vendidos " << soma << " livros.";

	return 0;
}