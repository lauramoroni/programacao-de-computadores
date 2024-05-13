#include <iostream>
using namespace std;

int main()
{
	char nome[] = "C++ Primer Plus";

	cout << "A palavra [e: " << nome << endl;
	cout << "Número de caracteres: " << strlen(nome) << endl;
	cout << "Espaço ocupado em bytes: " << sizeof(nome) << endl;

	return 0;
}