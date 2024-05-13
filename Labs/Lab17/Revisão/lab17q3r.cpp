#include <iostream>
using namespace std;

int main() {
	char vetor[30] = { "Programação de Computadores" };

	// versão com comparação
	for (int i = 0; i < strlen(vetor); i++) {
		cout << vetor[i];
	}

	cout << endl;

	// versão sem comparação
	for (char* ptr = vetor; *ptr != '\0'; ptr++) {
		cout << *ptr;
	}

	return 0;
}