#include <iostream>
#include <fstream>
using namespace std;

float maior(float* num, int j);

int main()
{
	ifstream fin;
	fin.open("lab25q2r.txt");

	float maior = 0;
	int j = 0;
	char linha[20];

	if (!fin.is_open()) {
		cout << "Erro ao abrir arquivo\n";
		exit(EXIT_FAILURE);
	} else {
		while (fin.getline(linha, 20)) {
			j++; // quantidade de números dentro do arquivo
		}
	}
	fin.close();

	fin.open("lab25q2r.txt");
	float num[j];

	while (fin.getline(linha, 20)) {
		for (int i = 0; i < j; i++) {
			cin << num[i];
			maior = maior(num, j);
		}
	}

	cout << "O maior valor é " << num;

	return 0;
}
float maior(float * num, int j) {
	float maior_num = 0;

	for (int i = 0; i < j; i++) {
		if (num[i] > maior_num) {
			maior_num = num[i];
		}
	}

	return maior_num;
}