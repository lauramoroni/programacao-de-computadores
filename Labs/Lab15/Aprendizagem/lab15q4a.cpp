#include <iostream>
using namespace std;

struct local
{
	char nome[20];
	char pais[20];
	char continente[20];
};
int main()
{
	int qtd;
	cout << "Quantos locais deseja visitar nas próximas férias? ";
	cin >> qtd;

	local* ferias = new local[qtd];

	for (int i = 0; i < qtd; i++) {
		cout << "Nome: ";
		cin >> ferias[i].nome;
		cout << "País: ";
		cin >> ferias[i].pais;
		cout << "Continente: ";
		cin >> ferias[i].continente;
		cout << "\n";
	}

	for (int i = 0; i < qtd; i++) {
		cout << ferias[i].nome;
		cout << "\n";
		cout << ferias[i].pais;
		cout << "\n";
		cout << ferias[i].continente;
		cout << "\n";
	}

	delete[] ferias;
	return 0;
}