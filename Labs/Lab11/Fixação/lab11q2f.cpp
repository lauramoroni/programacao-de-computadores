#include <iostream>
using namespace std;

int main()
{
	char nome[40], conceito;

	cout << "Qual � o seu nome? ";
	cin.getline(nome, 40);
	cout << "Que conceito voc� merece? ";
	cin >> conceito;
	conceito += 1;

	cout << "Bom dia " << nome << ", seu conceito � " << conceito;

	return 0;
}