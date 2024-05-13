#include <iostream>
using namespace std;

struct carro
{
	char modelo[20];
	int ano;
	float preco;
};
int main()
{
	carro vet[10] = {
		{"Vectra", 2009, 58'000},
		{"Polo", 2009, 45'000}
	};

	carro* p = &vet[1];
	
	cout << p->modelo << " " << p->ano << " " << p->preco;

	return 0;
}