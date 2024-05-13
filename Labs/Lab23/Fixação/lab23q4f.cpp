#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
	system("vol > lab23q4f.txt");

	ifstream fin;
	fin.open("lab23q4f.txt");
	if (!fin.is_open())
	{
		cout << "Erro na abertura do arquivo!\n";
		exit(EXIT_FAILURE);
	}

	char volume[50];
	fin.getline(volume, 50); // le a primeira linha
	
	int pos_volume = strlen(volume) - 11;

	for (int i = pos_volume; i < strlen(volume); i++) {
		fin >> volume[i];
	}

	char numSerie[50];
	for (int i = 0; i < 5; i++)
		fin >> numSerie;

	fin.close();

	cout << "Este programa funciona no Windows 7" << endl;
	cout << "Volume: " << volume << endl;
	cout << "Numero de Serie: " << numSerie << endl;

	return 0;
}