#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
	char nome_arquivo[20];
	cout << "Nome do arquivo: "; cin >> nome_arquivo;
	
	ifstream fin;
	fin.open(nome_arquivo); // lab23q5f.txt

	if (!fin.is_open()) {
		cout << "Erro ao abrir o arquivo\n";
		exit(EXIT_FAILURE);
	}

	char palavra_escolhida[20];
	cout << "Palavra: "; cin >> palavra_escolhida;

	bool ans = false;
	char palavra[20];

	while (fin >> palavra && !ans ) {
		if (!strcmp(palavra, palavra_escolhida)) {
			ans = true;
		}
	}
	fin.close();

	if (ans) {
		cout << "A palavra '" << palavra_escolhida << "' está presente no texto\n";
	}
	else {
		cout << "A palavra '" << palavra_escolhida << "' NÃO está presente no texto\n";
	}

}