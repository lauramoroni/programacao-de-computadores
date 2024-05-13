#include <iostream>
using namespace std;

struct par {
	int a, b;
};

void maior(par* vetor, int tam);

int main()
{
	par vetor[10];
	par p;

	cout << "Digite pares de valores (zero para finalizar):\n";
	int  i = 0;

	while ((cin >> p.a) && (p.a != 0) && (cin >> p.b) && (p.b != 0))
		vetor[i++] = p;

	cout << "Pares organizados\n";
	maior(vetor, i);
}

void maior(par* vetor, int tam) {
	int menor, maior;

	for (int i = 0; i < tam; i++) {
		if (vetor[i].a > vetor[i].b) {
			maior = vetor[i].a;
			menor = vetor[i].b;
		}
		else {
			maior = vetor[i].b;
			menor = vetor[i].a;
		}
		cout << "(" << menor << "," << maior << ")" << endl;
	}

}