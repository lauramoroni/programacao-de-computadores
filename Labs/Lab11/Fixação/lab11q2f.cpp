#include <iostream>
using namespace std;

int main()
{
	char nome[40], conceito;

	cout << "Qual é o seu nome? ";
	cin.getline(nome, 40);
	cout << "Que conceito você merece? ";
	cin >> conceito;
	conceito += 1;

	cout << "Bom dia " << nome << ", seu conceito é " << conceito;

	return 0;
}