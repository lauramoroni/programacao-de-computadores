#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
	char aux[20];

	char nome_arquivo[20];
	cout << "Digite o nome do arquivo: ";
	cin.getline(nome_arquivo, 20);

	strcpy(aux, nome_arquivo); 

	ifstream fin;
	fin.open(strcat(aux, ".txt"));
	if (!fin.is_open()) {
		cout << "Erro ao abrir o arquivo fin\n";
		exit(EXIT_FAILURE);
	}

	ofstream fout;
	fout.open(strcat(nome_arquivo, "_m.cpp"));
	if (!fout.is_open()) {
		cout << "Erro ao abrir o arquivo fout\n";
		exit(EXIT_FAILURE);
	}

	fout << "// " << nome_arquivo << endl << "# define print cout" << endl;
	
	char parametro[100]; // linha

	while (fin.good()) {
		fin.getline(parametro, 100);
		if (strcmp(parametro, "cout") == 0) {
			strcpy(parametro, "print");
		}
		fout << parametro;
	}
	fin.close();
	fout.close();

	cout << "Deu certo\n";

	return 0;
}