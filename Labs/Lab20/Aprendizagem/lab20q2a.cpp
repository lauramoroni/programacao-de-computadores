#include <iostream>
using namespace std;

const int LIMITE = 80;

int main()
{
	int vet[10], carros = 0, valor = 0;

	cout << "As últimas 10 velocidades registradas:\n";

	for (int i = 0; i < 10; i++)
	{
		cin >> vet[i];

		if (vet[i] > LIMITE)
		{
			cout << vet[i] << " Km/h excede o limite = multa de R$" << (vet[i] - LIMITE) * 8 << "\n";
			carros += 1;
			valor += (vet[i] - LIMITE) * 8;
		}
	}

	cout << carros << " carros foram multados em um valor total de R$" << valor;

}