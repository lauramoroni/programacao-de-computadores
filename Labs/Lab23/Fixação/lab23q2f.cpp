#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("input.txt");

	ofstream fout;
	fout.open("output.txt");

	if (!fin.is_open()) {
		cout << "Problema para carregar o arquivo";
		exit(EXIT_FAILURE);
	}

	char nome[20];
	double notas[3], media = 0;

	while (fin.good()) {
		fin >> nome;
		fout << nome;
		for (int i = 0; i < 3; i++) {
			fin >> notas[i];
			media += notas[i];
		}
		media = media / 3;
		if (media < 3) {
			fout << " Reprovado\n";
		}
		else if (media < 7) {
			fout << " Quarta prova\n";
		}
		else {
			fout << " Aprovado\n";
		}
	}

	fin.close();
	fout.close();

	return 0;
}