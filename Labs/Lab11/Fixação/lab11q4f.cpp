#include <iostream>
using namespace std;

int main()
{
	char nome[] = "C++ Primer Plus";

	cout << "A palavra [e: " << nome << endl;
	cout << "N�mero de caracteres: " << strlen(nome) << endl;
	cout << "Espa�o ocupado em bytes: " << sizeof(nome) << endl;

	return 0;
}