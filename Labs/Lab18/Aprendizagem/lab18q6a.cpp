#include <iostream>
using namespace std;

struct pessoa {
	char nome[20];
	int idade;
	char sexo[15];
};

int main()
{
	int soma = 0, i = 0;
	pessoa pessoa;

	do {
		cout << "Nome: ";
		cin >> pessoa.nome;

		cout << "Idade: ";
		cin >> pessoa.idade;
		soma += pessoa.idade;

		cout << "Sexo: ";
		cin >> pessoa.sexo;

		i += 1;

	} while (pessoa.nome != "fim");

	cout << "Média das idades: " << soma / i << endl;

	return 0;
}
