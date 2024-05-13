#include <iostream>
#include <cmath>
#include "inclusao.h"
using namespace std;

// arquivo main
int main() 
{
	double x, y, comprimento, angulo;
	cout << "Digite as coordenadas do vetor:\n";
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	comprimento = moduloVetor(x, y);
	angulo = calcAngulo(x, y);

	cout << "Coordenadas polares do vetor: (" << comprimento << ", " << angulo << ")";

	return 0;
}
