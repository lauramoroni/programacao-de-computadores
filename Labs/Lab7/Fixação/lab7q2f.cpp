#include <iostream>
using namespace std;

void Alerta();
int lerSenha();
int main() 
{
	cout << "Iniciando com um som...\n";
	Alerta();
	cout << "Digite a sua senha: ______\b\b\b\b\b\b";
	lerSenha();
	cout << "Obrigado!";

	return 0;
}
void Alerta()
{
	cout << "\a";
}
int lerSenha() {
	int senha;
	cin >> senha;

	return senha;
}