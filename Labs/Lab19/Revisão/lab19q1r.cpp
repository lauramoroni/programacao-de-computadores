#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	cout << "Digite palavras (pronto para parar):\n";
	char vetor[50];
	int i = 0;

	do {
		cin >> vetor;
		i += 1;
	} while (strcmp(vetor, "pronto") != 0);

	cout << "Foram digitadas um total de " << i-1 << " palavras.\n";

	return 0;
}