#include <iostream>
using namespace std;

const double NIV1 = 5000;
const double NIV2 = 15000;
const double NIV3 = 35000;

const double TAXA1 = 0.10;
const double TAXA2 = 0.15;
const double TAXA3 = 0.20;

int main()
{
	double salario;
	double imposto;

	cout << "Digite a sua renda (zero para sair): ";
	cin >> salario;

	while (salario != 0)
	{
		if (salario <= 5000)
			imposto = 0;
		else if (salario <= 10000)
			imposto = (salario - 5000) * 0.1;
		else if (salario <= 20000)
			imposto = 5000 * 0.1 + (salario - 15000) * 0.15;
		else
			imposto = 5000 * 0.1 + 10000 * 0.15 + (salario - 20000) * 0.2;

		cout << "Imposto devido: " << imposto << ".\n\n";

		cout << "Digite a sua renda (zero para sair): ";
		cin >> salario;
	}

	return 0;
}