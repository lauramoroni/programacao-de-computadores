#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("sol.txt");
	
	if (!fin.is_open()) {
		cout << "Abertura do arquivo deu errado\n";
		exit(EXIT_FAILURE);
	}

	ofstream fout;
	fout.open("num.txt"); // cria se nao exisitir; sobrescreve se existir
	if (!fout.is_open())
	{
		cout << "Abertura do arquivo num.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	char ch; int num;

	while (fin.good()) {

		if (fin >> num) {
			fout << num << endl ;
		}
		else {
			fin.clear();
			fin >> ch;
		}
	}


	fin.close();
	fout.close();

	cout << "Pronto\n";

	return 0;
}