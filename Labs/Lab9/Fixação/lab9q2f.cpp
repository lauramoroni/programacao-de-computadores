#include <iostream>
using namespace std;

int main()
{
	double val;

	cout << "Digite um ponto flutuante: ";
	cin >> val;

	cout << "Nota��o padr�o: " << val << endl; // Era pra sair 258041, por�m est� resultando 258040

	cout << scientific;
	cout << "Nota��o cient�fica: " << val << endl;

	cout << fixed; cout.precision(2);
	cout << "Nota��o decimal: " << val << endl;

	return 0;
}