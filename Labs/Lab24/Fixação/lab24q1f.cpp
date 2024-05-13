#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int num;

	ifstream fin;
	fin.open("integer.bin", ios_base::in | ios_base::binary);
	if (fin.is_open()) { // se o arquivo j� existe
		cout << "Arquivo encontrado!\n";
		fin.read((char*)&num, sizeof(int));
		cout << "Ele cont�m o n�mero " << num << "\n";
	}
	fin.close();

	cout << "Digite um inteiro: ";
	cin >> num;

	ofstream fout;
	fout.open("integer.bin", ios_base::out | ios_base::binary);
	fout.write((char*)&num, sizeof(int));
	fout.close();
	
	cout << "N�mero armazenado no arquivo\n";

	return 0;
}