#include <iostream>
using namespace std;

int main()
{
	double num;

	cout << "Digite um ponto flutuante: ";
	cin >> num;

	cout << "Nota��o padr�o: " << num << endl;

	cout << "Nota��o cient�fica: ";
	cout << scientific;
	cout << num << endl;

	cout << "Nota��o decimal: ";
	cout << fixed;
	cout << num;

	return 0;
}