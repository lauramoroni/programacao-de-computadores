#include <iostream>
using namespace std;

bool corrigir(char*);

int main()
{
	char nome[100];

	cout << "Entre com os nomes dos aprovados:\n";
	
	while (strcmp(nome, "fim") != 0) {
		cin.getline(nome, 100);

		bool alterado = corrigir(nome);
		if (alterado) {
			cout << nome << " <-- Corrigido" << endl;
		}
		else {
			cout << nome << " <-- OK" << endl;
		}
	}

	return 0;
}

bool corrigir(char* nome) {
	bool corrigido = false;
	int tam = strlen(nome);
	bool maiuscula = true;

	for (int i = 0; i < tam; i++) {
		if (isalpha(nome[i])) {
			if (maiuscula) {
				nome[i] = toupper(nome[i]);
				corrigido = true;
			}
			else {
				nome[i] = tolower(nome[i]);
			}
			maiuscula = false;
		}
	}

	return corrigido;
}