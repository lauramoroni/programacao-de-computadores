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
	char msg[80];
	color texto, fundo;

	ifstream fin;
	fin.open("mensagem.cor", ios_base::in | ios_base::binary);
	if (fin.is_open())
	{
		fin.read((char*)msg, sizeof(msg));
		fin.read((char*)&texto, sizeof(color));
		fin.read((char*)&fundo, sizeof(color));
		fin.close();

		cout << "\033[38;5;" << texto.a << texto.b << texto.c << ";48;5;" << fundo.a << fundo.b << fundo.c << "m";

		cout << msg << endl << "\033[m" << endl;
	}
}
void armazenar() {
	cin.get();

	char msg[80];
	color texto, fundo;

	cout << "Sua mensagem: ";
	cin.getline(msg, 80);

	cout << "Cor do texto: ";
	cin >> texto.a;
	cin >> texto.b;
	cin >> texto.c;

	cout << "Cor do fundo: ";
	cin >> fundo.a;
	cin >> fundo.b;
	cin >> fundo.c;

	ofstream fout;
	fout.open("mensagem.cor", ios_base::out | ios_base::binary);
	fout.write((char*)msg, sizeof(msg));
	fout.write((char*)&texto, sizeof(color));
	fout.write((char*)&fundo, sizeof(color));
	fout.close();

	
}