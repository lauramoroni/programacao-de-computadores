#include <iostream>
using namespace std;

struct Login
{
	char nome[20];
	char senha[20];
};
int main()
{
	Login login = { "Laura ", "Laura123@" };

	char nome[20], senha[20];
	cout << "Nome: ";
	cin >> nome;
	cout << "Senha: ";
	cin >> senha;

	bool comparacao = true;

		// verifica se o login é o mesmo
	for (int i = 0; i < strlen(login.nome); i++)
	{
		if (nome[i] != login.nome[i])
		{
			comparacao = false;
			break;
		}
	}

		// se o login for o mesmo, verifica se a senha é a mesma
	if (comparacao = true)
	{
		for (int i = 0; i < strlen(login.senha); i++)
		{
			if (senha[i] != login.senha[i])
			{
				comparacao = false;
				break;
			}
		}
	}

	if (comparacao = true) {
		cout << "Login e senha corretos." << endl;
	}
	else {
		cout << "Login ou senha incorretos." << endl;
	}

	return 0;
}