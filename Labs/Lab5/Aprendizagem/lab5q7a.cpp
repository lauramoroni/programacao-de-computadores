#include <iostream>
#include <cmath>
using namespace std;

float quadrado(float base);
float cubo(float base);

float quadrado(float base) {
	return pow(base, 2);
}
float cubo(float base) {
	return pow(base, 3);
}
int main() {
	float base;

	cout << "Digite um valor: ";
	cin >> base;
	cout << "Quadrado = " << quadrado(base) << endl;
	cout << "Cubo = " << cubo(base) << endl;
	cout << "Cubo do quadrado = " << cubo(quadrado(base)) << endl;

	return 0;
}