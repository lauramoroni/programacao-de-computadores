#include <iostream>
#include <cmath>
using namespace std;

float moduloVetor(int x, int y) {
	return sqrt(pow(x, 2) + pow(y, 2));
}
int main() {
	int x, y;
	float modulo;

	cout << "Digite as coordenadas do vetor:\n";
	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;
	modulo = moduloVetor(x, y);

	cout << "O tamanho do vetor é " << modulo;

	return 0;
}