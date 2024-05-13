#include <iostream>
#include <string>
using namespace std;

int main()
{
	string nome, sobrenome;

	cout << "Digite seu nome e sobrenome: ";
	cin >> nome >> sobrenome;
	cout << "Bom dia senhor, " << sobrenome << ". Ou devo chamá-lo de " << nome << "?\n";

	return 0;
}