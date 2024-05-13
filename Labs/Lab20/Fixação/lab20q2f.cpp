#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int soma = 0;

	cout << "Digite três números inteiros a, b e c ('a' maior que 1): ";

	cin >> a >> b >> c;

	for (b; b <= c; b++) {
		if (b % a == 0) {
			soma += b;
		}
	}

	cout << "Soma: " << soma;

	return 0;
}