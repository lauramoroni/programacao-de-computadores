#include <iostream>
using namespace std;

int main() {
	char vetor[30] = { "Programa��o de Computadores" };

	// vers�o com compara��o
	for (int i = 0; i < strlen(vetor); i++) {
		cout << vetor[i];
	}

	cout << endl;

	// vers�o sem compara��o
	for (char* ptr = vetor; *ptr != '\0'; ptr++) {
		cout << *ptr;
	}

	return 0;
}