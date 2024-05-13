#include <iostream>
using namespace std;

int preencher(double *, int);
void mostrar(double*, int);
void inverter(double* , int);

int main()
{
	double vet[10];
	int tam = preencher(vet, 10);

	mostrar(vet, tam);
	inverter(vet, tam);

	mostrar(vet, tam);
	inverter(vet, tam - 2);

	mostrar(vet, tam);
} 

int preencher(double* vet, int tam) {
	cout << "Entre com até " << tam << " valores:\n";
	
	int i = 0;
	double num;

	while (i < tam && cin >> num)
		vet[i++] = num;

	return i;
}
void mostrar(double* vet, int tam) {
	for (int i = 0; i < tam; i++) {
		cout << vet[i] << " ";
	}
	cout << endl;
}
void inverter(double* vet, int tam) {
	for (int i = 0, j = tam - 1; i < j; ++i, --j)
	{
		double temp = vet[i];
		vet[i] = vet[j];
		vet[j] = temp;
	}
}