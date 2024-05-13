#include <iostream>
using namespace std;

struct Caixa
{
	char marca[40];
	float altura;
	float largura;
	float comprimento;
	float volume;
};

void exibir(const Caixa* c); // const pois não precisa modificar
void modificar(Caixa* c);

void exibir(const Caixa*c) {
	cout << "Marca: " << c->marca << " = ";
	cout << c->altura << " X " << c->largura << " X " << c->comprimento << endl;
	cout << "Volume: " << c->volume << endl;
}
void modificar(Caixa* c) {
	c->volume = c->altura * c->comprimento * c->largura;
}

int main()
{
	Caixa c = { "Teste", 4, 5, 6 };

	exibir(&c);
	modificar(&c);
	exibir(&c);

	return 0;
}

// Usar referência é mlehor pois não precisa fazer cópia 