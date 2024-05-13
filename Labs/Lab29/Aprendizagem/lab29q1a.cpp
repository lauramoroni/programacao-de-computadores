#include <iostream>
#include <fstream>
using namespace std;

void unidade(ifstream&, int);
void gerar_linhas(const char*, int n = 10);

int main() {
	ifstream fin;
	fin.open("stats.txt");

	unidade(fin, 1);
	unidade(fin, 2);
	unidade(fin, 3);

	fin.close();
}

void unidade(ifstream& fin, int n) {

	if (!fin.is_open()) {
		cout << "Erro ao abrir arquivo\n";
		exit(EXIT_FAILURE);
	}

	int rev, fix, apr, lab, i = 0;
	int tot_rev = 0, tot_fix = 0, tot_apr = 0;

	char linha[10];

	
		//fin.getline(linha, 10);
	while (i < 10) {
		fin >> lab >> rev >> fix >> apr;

		tot_rev += rev;
		tot_fix += fix;
		tot_apr += apr;

		i++;
	}

	gerar_linhas("-");
	cout << n << "a unidade\n";
	gerar_linhas("-");
	cout << "Revisão: " << tot_rev << endl << "Fixação: " << tot_fix << endl << "Aprendizagem: " << tot_apr << endl;

	int total = tot_rev + tot_fix + tot_apr;
	gerar_linhas("-");
	cout << "Total: " << total << "\n\n";


}
void gerar_linhas(const char* ch, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << ch;
	}
	cout << endl;
}