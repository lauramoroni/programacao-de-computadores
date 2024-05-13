#include <iostream>
using namespace std;

int main()
{
	char nome[15], sobrenome[15];
	cout << "Primeiro nome? ";
	cin >> nome;
	cout << "Segundo nome? ";
	cin >> sobrenome;
	cout << "Bom dia, " << nome << " " << sobrenome << "!\n";
	cout << "Seja bem vindo " << nome[0] << sobrenome[0];

	return 0;
}