#include <iostream>
using namespace std;

int main()
{
	char palavra[20], invertida[20];

	cout << "Digite uma palavra: ";
	cin >> palavra;

	int tam = strlen(palavra);

	for (int i = 0; i < tam; i++) {
		invertida[i] = palavra[tam - i - 1];
	}

	invertida[tam] = '\0';

	cout << "Palavra invertida: " << invertida << endl;

	if (strcmp(palavra, invertida))
		cout << "A palavra n�o � um pal�ndromo\n";
	else
		cout << "A palavra � um pal�ndromo\n";

	return 0;
}