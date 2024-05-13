#include <iostream>
using namespace std;

struct carro {
	string marca;
	int ano;
};
int main()
{
	int qtd_carros;
	cout << "Quantos carros quer cadastrar? ";
	cin >> qtd_carros;

	carro carro[15];

	for (int i = 0; i < qtd_carros; i++) {
		cout << "Carro #" << i + 1 << endl;

		cout << "Marca: ";
		cin >> carro[i].marca;

		cout << "Ano: ";
		cin >> carro[i].ano;
	}

	cout << "\nAqui está sua colocação\n";

	for (int i = 0; i < qtd_carros; i++) {
		cout << carro[i].ano << "   " << carro[i].marca << endl;
	}

	return 0;
}