#include <iostream>
using namespace std;

int main()
{
	char senha[] = "senha123";
	char senhaUsuario[30];

	cout << "Digite a senha: ";
	cin >> senhaUsuario;

	if (senhaUsuario == senha) {
		cout << "Senha correta.\n";
	}
	else {
		cout << "Senha incorreta.\n";
	}

	return 0;
}