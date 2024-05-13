#include <iostream>
#include <fstream>
using namespace std;

struct Soldado {
	char nome[20];
	float eliminacoes, mortes, taxa;
	int partidas;
};

int main()
{
	ifstream fin;
	ofstream fout;

	Soldado soldado;

	cout << "Nome do soldado: ";
	cin >> soldado.nome;
	cout << "Eliminações: ";
	cin >> soldado.eliminacoes;
	cout << "Mortes: ";
	cin >> soldado.mortes;
	cout << "Partidas: ";
	cin >> soldado.partidas;
		
	fout.write((char*)&soldado, sizeof(Soldado));
	fout.close();

	fin.open("lab24q1a.bin", ios_base::in | ios_base::binary);
	if (fin.is_open()) {
		while (fin.read((char*)&soldado, sizeof(Soldado))) {
			cout << "Nome: " << soldado.nome << endl;
			cout << "Eliminações: " << soldado.eliminacoes << endl;
			cout << "Mortes: " << soldado.mortes << endl;
			cout << "Taxa de eliminação por morte: " << soldado.eliminacoes / soldado.mortes << endl;
			cout << "Partidas: " << soldado.partidas << endl;
		}
		fin.close();
	}

	fout.close();
	fin.close();

}