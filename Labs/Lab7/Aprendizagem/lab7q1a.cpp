#include <iostream>
using namespace std;

char codificar(char);
char decodificar(char);
int main()
{
	char ch;
	cout << "Digite um caractere: ";
	cin >> ch;
	cout << "Caractere codificado: " << codificar(ch) << endl;
	cout << "Caractere decodificado: " << decodificar(ch) << endl;

	return 0;
}
char codificar(char ch)
{
	ch += 3;
	return ch;
}
char decodificar(char ch)
{
	ch = codificar(ch) - 3;
	return ch;
}