#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("pescado.txt");
	if (!fin.is_open()) {
		cout << "Problema em abrir o arquivo!\n";
		exit(EXIT_FAILURE);
	}

	char nome[20]; 
	int peso, tam, total = 0;

	while (fin.good()) {
		fin >> nome;
		fin >> peso;
		fin >> tam;

		total += peso;
	}

	fin.close();

	cout << "Total de kg: " << total << endl;

	return 0;
}