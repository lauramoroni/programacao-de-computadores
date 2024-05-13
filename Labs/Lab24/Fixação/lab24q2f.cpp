#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("vet.dat", ios_base::in | ios_base::binary);

	int num, tam = 0;

	if (fin.is_open()) {
		fin.read((char*)&tam, sizeof(int));

		cout << "O arquivo contém:\n";

		// lê e exibe cada elemento
		for (int i = 0; i < tam; ++i)
		{
			fin.read((char*)&num, sizeof(int));
			cout << num << " ";
		}
		cout << endl;
	}
	fin.close();


	ofstream fout;
	fout.open("vet.dat", ios_base::out | ios_base::binary);
	fout.write((char*)&num, sizeof(int));

	cout << "Digite um inteiro (zero para encerrar):\n"; cin >> num;
	while (cin >> num && num != 0) {
		fout.write((char*)&num, sizeof(int));
		tam++;
	}

	// atualiza quantidade de elementos no início do arquivo
	fout.seekp(0, ios_base::beg);
	fout.write((char*)&tam, sizeof(int));
	fout.close();

	cout << tam << " números foram armazenados em vet.dat" << endl;

	return 0;
}