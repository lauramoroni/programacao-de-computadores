#include <iostream>
using namespace std;

struct Livro 
{
	int numPag;
	char autor[25];
	char nome[25];
	float preco;
};
struct Jogo 
{
	float preco;
	char nome[25];
};
int main() 
{
	Livro livrosEmprestados[3];
	Jogo jogosEmprestados[3];

	cout << "Digite 1 para escolher um LIVRO, e 0 para escolher um JOGO\n";

	short resposta;
	cin >> resposta;
	if (resposta == 0) {
		cout << "Nome: ";
		cin >> livrosEmprestados[0].nome;
		cout << "\nAutor: ";
		cin >> livrosEmprestados[0].autor;
		cout << "\nPre�o: ";
		cin >> livrosEmprestados[0].preco;
		cout << "\nN�mero de p�ginas: ";
		cin >> livrosEmprestados[0].numPag;
	}
	else if (resposta == 1) {
		cout << "Nome: ";
		cin >> jogosEmprestados[0].nome;
		cout << "\nPre�o: ";
		cin >> jogosEmprestados[0].preco;
	}
	else {
		"Resposta inv�lida.\n";
	}
}