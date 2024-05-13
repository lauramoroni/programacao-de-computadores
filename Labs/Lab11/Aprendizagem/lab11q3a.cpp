#include <iostream>
#include <string>
using namespace std;

int main()
{
	string nome, data;
	cout << "Nome: ";
	getline(cin, nome);

	cout << "Data: ";
	getline(cin, data);

	string frase = nome + " esteve aqui em ";
	string frase_final = frase + data;
	cout << frase_final << endl;

	return 0;
}