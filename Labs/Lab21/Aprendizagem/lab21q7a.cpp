#include <iostream>
using namespace std;

struct nadador {
	char nome[20];
	int idade;
	char categoria[20];
};
int main()
{
	nadador pessoa;

	cout << "Nome: "; cin >> pessoa.nome;
	cout << "Idade: "; cin >> pessoa.idade;

	if (pessoa.idade >= 5 && pessoa.idade <= 7) {
		strcpy(pessoa.categoria, "Infantil");
	}
	else if (pessoa.idade >= 8 && pessoa.idade <= 10) {
		strcpy(pessoa.categoria, "Juvenil");
	}
	else if (pessoa.idade >= 11 && pessoa.idade <= 15) {
		strcpy(pessoa.categoria, "Adolescente");
	}
	else if (pessoa.idade >= 16 && pessoa.idade <= 30) {
		strcpy(pessoa.categoria, "Adulto");
	}
	else {
		strcpy(pessoa.categoria, "Sènior");
	}

	return 0;
}