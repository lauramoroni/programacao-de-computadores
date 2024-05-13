#include <iostream>
using namespace std;

int main()
{
	double num;

	cout << "Digite um ponto flutuante: ";
	cin >> num;

	cout << "Notação padrão: " << num << endl;

	cout << "Notação científica: ";
	cout << scientific;
	cout << num << endl;

	cout << "Notação decimal: ";
	cout << fixed;
	cout << num;

	return 0;
}