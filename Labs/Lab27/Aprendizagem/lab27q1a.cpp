#include <iostream>
using namespace std;

void func1();
void func2();
void func3();

void (*func[])(void) = { func1, func2, func3 };

int main()
{
	int num;

	do {

		cout << "Menu do Sistema\n";
		cout << "1) Inserir\n2) Remover\n3) Buscar\n4) Sair\n";
		cout << "Escolha: [ ]\b\b";

		cin >> num;

		func[num - 1]();

	} while (num != 4);

}

void func1() {
	cout << "Inserindo...\n";
}
void func2() {
	cout << "Removendo...\n";
}
void func3() {
	cout << "Buscando...\n";
}

//void (*func[])(void) = { func1, func2, func3 };
