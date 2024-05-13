#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

struct Guloseima
{
	char marca[24];
	double peso;
	int calorias;
};

void modificar(Guloseima&, char*, double, int);

void modificar(Guloseima& doce, const char* nome = "Charge", double peso = 40.0, int cal = 187) {
	strcpy(doce.marca, nome);
	doce.peso = peso;
	doce.calorias = cal;
}

void exibir(const Guloseima& g); // const pois é uma função apenas para exibir

void exibir(const Guloseima& g) {
	cout << "Marca: " << g.marca << endl;
	cout << "Peso (g): " << g.peso << endl;
	cout << "Calorias: " << g.calorias << endl;
}
int main()
{
	Guloseima a, b, c;

	modificar(a);
	exibir(a); // deve exibir os valores padrões

	modificar(b, "Crunch", 25.0); // deve manter as 187 calorias
	exibir(b);

	modificar(c, "KitKat", 45.0, 241);
	exibir(c); // deve mudar tudo

}