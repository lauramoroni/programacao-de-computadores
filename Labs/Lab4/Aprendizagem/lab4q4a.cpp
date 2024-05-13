#include <iostream>
#include <cmath>
using namespace std;

float VolumeCilindro(float r, float h) {
	double volume, pi = 3.14159;
	volume = pi * pow(r, 2) * h;

	return volume;
}
int main() {
	float raio, altura, resultado;

	cout << "Calcula o Volume de um Cilindro\n";
	cout << "-------------------------------\n";
	cout << "Entre com o raio da base: ";
	cin >> raio;
	cout << "Entre com a altura: ";
	cin >> altura;
	resultado = VolumeCilindro(raio, altura);

	cout << "O volume do cilindro é " << resultado;

	return 0;
}