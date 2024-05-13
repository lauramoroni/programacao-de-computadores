#include <iostream>
using namespace std;

struct peixe
{
	char tipo[20];
	float peso;
	unsigned comp;
};

int main()
{
	int tam;
	cout << "Tamanho do vetor: ";
	cin >> tam;

	peixe* p = new peixe[tam];

	cout << "Tipo: ";
	cin >> p->tipo;
	cout << endl;
	cout << "Peso: ";
	cin >> p->peso;
	cout << endl;
	cout << "Comprimento: ";
	cin >> p->comp;
	cout << endl;

	cout << "O peso do peixe é " << p->peso << " gramas";

	delete[] p;
	return 0;
}