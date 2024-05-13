#define _USE_MATH_DEFINES
#include <cmath>

// arquivo fonte
double conversao(double radianos)
{
	return (180 * radianos) / M_PI;
}
double calcAngulo(double x, double y)
{
	double resultado = atan2(y, x);
	return conversao(resultado);
}
double moduloVetor(double x, double y)
{
	return sqrt(pow(x, 2) + pow(y, 2));
}