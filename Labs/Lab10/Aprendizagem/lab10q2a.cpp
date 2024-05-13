#include <iostream>
using namespace std;

int main()
{
	float pesos[3] = { 2.0f, 3.0f, 4.0f };
	float notas[3];

	cout << "Nota 1: ";
	cin >> notas[0];
	cout << "Nota 2: ";
	cin >> notas[1];
	cout << "Nota 3: ";
	cin >> notas[2];

	float media = ((pesos[0] * notas[0]) + (pesos[1] * notas[1]) + (pesos[2] * notas[2])) / (pesos[0] + pesos[1] + pesos[2]);

	cout << "Média: " << media;

	return 0;
}
