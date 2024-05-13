#include <iostream>
using namespace std;

int main()
{
	double vet[10];
	int i = 0, maior_media = 0;
	double soma = 0;

	cout << "Digite ate 10 valores de donativos (zero para encerrar):";

	do {
		cin >> vet[i];
		soma += vet[i];
	} while (vet[i] != 0, i++);

	double media = soma / i;

	cout << "A media dos valores doados foi de " << media << endl;

	for (int j = 0; j < i; j++)
	{
		if (vet[j] > media)
		{
			maior_media += 1;
		}
	}

	cout << maior_media << " valores foram maiores que a media.";

	return 0;
}