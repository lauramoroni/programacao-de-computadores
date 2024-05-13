#include <iostream>
using namespace std;

int main()
{
	cout << "Digite uma palavra: ";
	char frase[60];
	cin.getline(frase, 60);

	char invertida[60];
	int tam = strlen(frase);
	for (int i = 0; i < tam; i++)
		invertida[i] = frase[tam - i - 1];

	invertida[tam] = '\0';

	cout << "Frase invertida: " << invertida << endl;

	if (strcmp(frase, invertida))
		cout << "A frase nao é um palindromo\n";
	else
		cout << "A frase e um palindromo\n";

	return 0;
}