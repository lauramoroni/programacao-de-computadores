#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

double conversao(double radianos) 
{
	return (180 * radianos) / M_PI;
}
double calcAngulo(double x, double y)
{
	double resultado = atan2(y, x);
	return conversao(resultado);
}
int main()
{
	double x, y;
	cout << "Digite as coordenadas do vetor:\n";
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	cout << "O ângulo do vetor é " << calcAngulo(x, y);

	return 0;
}