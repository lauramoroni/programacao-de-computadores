#include <iostream>
using namespace std;

int main()
{
	char vetor[4][15];
	string concatenado;
	cout << "Digite 4 palavras: ";
	for (int i = 0; i < 4; i++) {
		cin >> vetor[i];

		concatenado += vetor[i];
	}

	cout << concatenado;
	
	return 0;
}