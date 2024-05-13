#include <iostream>
using namespace std;

int main()
{
	int n, i = 0;
	float soma = 0;
	float media;

	cout << "Digite números inteiros (0 para finalizar):\n";

	do {
		cin >> n;

		soma += n;
		i += 1;

	} while (n != 0);

	cout << "Foram lidos " << i-1 << " números\n";
	cout << "A soma dos números é " << soma << "\n";
	media = soma / (i-1);
	cout << "A média é " << media;

	return 0;
}