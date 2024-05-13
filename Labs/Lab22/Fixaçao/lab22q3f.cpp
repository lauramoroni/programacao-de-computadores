#include <iostream>
using namespace std;

void inserir();
void remover();
void buscar();
void sair();
void invalida();

int main()
{
	cout << "Menu do Sistema\n";

	cout << "a) Inserir\nb) Remover\nc) Buscar\nd) Sair\n";

	char ch = 'p';
	int i = 0;
	
	while (ch != 'd') {

		cout << "Escolha: "; cin >> ch; 

		switch (ch) {
		case 'a':
			inserir();
			break;
		case 'b': 
			remover();
			break;
		case 'c': 
			buscar();
			break;
		case 'd': 
			sair();
			break;
		default:
			invalida();
		}

		cout << "\n";
	}

	return 0;
}

void inserir() {
	cout << "Inserindo elementos...\n";
}
void remover() {
	cout << "Removendo elementos...\n";
}
void buscar() {
	cout << "Buscando elementos...\n";
}
void sair() {
	cout << "Tchau!\n";
}
void invalida() {
	cout << "Operação inválida\n";
}