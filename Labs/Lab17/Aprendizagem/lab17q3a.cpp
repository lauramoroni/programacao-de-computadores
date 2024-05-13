#include <iostream>
using namespace std;

int soma_intervalo(int, int);
int main()
{
	int inicio, fim;
	cout << "Inicio: ";
	cin >> inicio;
	cout << "Fim: ";
	cin >> fim;

	cout << "A soma dos valores entre " << inicio << " e " << fim << " é " << soma_intervalo(inicio, fim);

}
int soma_intervalo(int a, int b)
{
	int soma = ((a + b) * (b - a + 1) / 2);

	return soma;
}