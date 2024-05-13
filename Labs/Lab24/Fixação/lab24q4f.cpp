#include <iostream>
#include <fstream>
using namespace std;

struct color {
	int a, b, c;
};

void exibir();
void armazenar();

int main()
{

	char escolha;

	do {
		cout << "Mensagens coloridas\n";
		cout << "-------------------\n";
		cout << "[A]rmazenar\n";
		cout << "[E]xibir\n";
		cout << "[S]air\n";
		cout << "-------------------\n";
		cout << "Opção: [ ]\b\b";
		cin >> escolha; escolha = toupper(escolha);

		switch (escolha) {
		case 'A': armazenar(); break;
		case 'E': exibir(); break;
		case 'S': break;
		default: break;
		}
		cout << endl;

	} while (escolha != 'S');
}
void exibir() {
	char img[5][5];
	color texto, fundo;

	ifstream fin;
	fin.open("mensagem.cor", ios_base::in | ios_base::binary);
	if (fin.is_open())
	{
		fin.read((char*)img, sizeof(img));
		fin.read((char*)&texto, sizeof(color));
		fin.read((char*)&fundo, sizeof(color));
		fin.close();

		cout << "\033[38;5;" << texto.a << texto.b << texto.c << ";48;5;" << fundo.a << fundo.b << fundo.c << "m";

		cout << img << endl << "\033[m" << endl;
	}
}
void armazenar() {
	
	cout << "Altura: "; int altura;
	cin >> altura;

	cout << "Largura: "; int largura;
	cin >> largura;

	color* cores = new color[altura * largura];

	for (int i = 0; i < altura; ++i)
	{
		cout << "#" << i + 1 << ": ";
		for (int j = 0; j < largura; ++j)
		{
			cin >> cores[i * largura + j].a;
			cin >> cores[i * largura + j].b;
			cin >> cores[i * largura + j].c;
		}
	}

	ofstream fout;
	fout.open("mensagem.cor", ios_base::out | ios_base::binary);
	fout.write((char*)&altura, sizeof(int));
	fout.write((char*)&largura, sizeof(color));
	fout.write((char*)cores, sizeof(color));
	fout.close();

	delete[] cores;
}