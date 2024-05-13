#include <iostream>
using namespace std;

int main()
{
	double val;

	cout << "Digite um ponto flutuante: ";
	cin >> val;

	cout << "Notação padrão: " << val << endl; // Era pra sair 258041, porém está resultando 258040

	cout << scientific;
	cout << "Notação científica: " << val << endl;

	cout << fixed; cout.precision(2);
	cout << "Notação decimal: " << val << endl;

	return 0;
}