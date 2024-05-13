#include <iostream>
using namespace std;

struct carro {
	char nome[20];
	int ano;
	char cor[10];
	float preco;
};

int main()
{
	carro vetor[10] = {
		{"Vectra", 2009, "Azul", 58'000},
		{"Polo", 2008, "Preto", 45'000}
	};

	// Ler carro
	cout << "== Entre com os dados de um carro ==\n";
	cout << "Nome: ";
	cin >> vetor[2].nome;
	cout << "\n";
	cout << "Ano: ";
	cin >> vetor[2].ano;
	cout << "\n";
	cout << "Cor: ";
	cin >> vetor[2].cor;
	cout << "\n";
	cout << "Preço: ";
	cin >> vetor[2].preco;
	cout << "\n";

	// Exibir todos os carros
	cout << "== Carro 1 ==\n";
	cout << "Nome: " << vetor[0].nome << "\n";
	cout << "Ano: " << vetor[0].ano << "\n";
	cout << "Cor: " << vetor[0].cor << "\n";
	cout << "Preço: " << vetor[0].preco << "\n";

	cout << "== Carro 2 ==\n";
	cout << "Nome: " << vetor[1].nome << "\n";
	cout << "Ano: " << vetor[1].ano << "\n";
	cout << "Cor: " << vetor[1].cor << "\n";
	cout << "Preço: " << vetor[1].preco << "\n";

	cout << "== Carro 3 ==\n";
	cout << "Nome: " << vetor[2].nome << "\n";
	cout << "Ano: " << vetor[2].ano << "\n";
	cout << "Cor: " << vetor[2].cor << "\n";
	cout << "Preço: " << vetor[2].preco << "\n";

	return 0;
}