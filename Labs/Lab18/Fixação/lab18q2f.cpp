#include <iostream>
using namespace std;

int main()
{
	int n, i = 0;
	float soma = 0;
	float media;

	cout << "Digite n�meros inteiros (0 para finalizar):\n";

	do {
		cin >> n;

		soma += n;
		i += 1;

	} while (n != 0);

	cout << "Foram lidos " << i-1 << " n�meros\n";
	cout << "A soma dos n�meros � " << soma << "\n";
	media = soma / (i-1);
	cout << "A m�dia � " << media;

	return 0;
}