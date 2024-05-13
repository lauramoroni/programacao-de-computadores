#include <iostream>
#include <cmath>
using namespace std;

float calculoIMC(float peso, float altura) {
	return peso / (pow(altura, 2));
}
int main() {
	float altura, massa;

	cout << "Índice de Massa Corporal(IMC)\n";
	cout << "------------------------\n";
	cout << "Altura: ";
	cin >> altura;
	cout << "Massa: ";
	cin >> massa;
	cout << "IMC: " << calculoIMC(massa, altura);

	return 0;
}