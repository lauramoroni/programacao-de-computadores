#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
	char arquivo[20];
	cout << "Arquivo: "; cin >> arquivo;

	ifstream fin;
	fin.open(arquivo);
	if (!fin.is_open()) {
		cout << "Erro ao abrir arquivo de entrada\n";
		exit(EXIT_FAILURE);
	}

	char palavra[20];
	int palindromos = 0;

	while (fin >> palavra) {
		char palavra_invertida[20];

		for (int i = 0; i < strlen(palavra); i++) {
			palavra[strlen(palavra) - i - 1] = tolower(palavra[strlen(palavra) - i - 1]);
			palavra_invertida[i] = palavra[strlen(palavra) - i - 1];
		}

		palavra_invertida[strlen(palavra)] = '\0';

		if (strcmp(palavra_invertida, palavra) == 0) {
			cout << palavra << endl;
			palindromos++;
		}
	}
	fin.close();

	cout << "Foram encontrados " << palindromos << " palíndromos neste arquivo\n";
	
	return 0;
}