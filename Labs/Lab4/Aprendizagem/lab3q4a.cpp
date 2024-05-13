#include <iostream>
using namespace std;

int main() {
	float custo_fabrica, custo_consumidor, impostos, distribuidor;
	cout << "Custo de fábrica: ";
	cin >> custo_fabrica;
	distribuidor = 0.28 * custo_fabrica;
	impostos = 0.45 * custo_fabrica;
	custo_consumidor = custo_fabrica + impostos + distribuidor;
	cout << "O custo ao consumidor é de R$" << custo_consumidor;

	return 0;
}