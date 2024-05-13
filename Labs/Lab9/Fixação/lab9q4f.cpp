#include <iostream>
using namespace std;

int main()
{
	double aposta1, aposta2, premio, x;

	cout << "Digite a quantia apostada pelo jogador 1: ";
	cin >> aposta1;
	cout << "Digite a quantia apostada pelo jogador 2: ";
	cin >> aposta2;
	cout << "Entre com o valor do prêmio: ";
	cin >> premio;

	x = premio / (aposta1 + aposta2);

	cout << fixed; cout.precision(0);
	cout << "O jogador 1 tem direito a R$" << aposta1 * x << endl;
	cout << "O jogador 2 tem direito a R$" << aposta2 * x << endl;

	return 0;
}