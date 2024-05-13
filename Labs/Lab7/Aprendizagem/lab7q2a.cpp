#include <iostream>
using namespace std;

char codificar(char);
char decodificar(char);
int main()
{
	char ch;
	int resposta;

	cout << "Digite um caractere: ";
	cin >> ch;
	cout << "Digite 1 para codificar e 0 para decodificar: ";
	cin >> resposta;
	if (resposta == true) {
		codificar(ch);
	}
	else {
		decodificar(ch);
	}

	return 0;
}
char codificar(char ch)
{
	ch += 3;
	cout << "Caractere codificado: " << ch;

	return ch;
}
char decodificar(char ch)
{
	ch -= 3;
	cout << "Caractere decodificado: " << ch;

	return ch;
}