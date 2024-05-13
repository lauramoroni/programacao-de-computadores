#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

double calcSeno(double graus){
	double radianos = (M_PI / 180.0) * graus;
	return sin(radianos);
}
int main() {
	int n;
	double seno;

	cout << "Digite um ângulo: ";
	cin >> n;
	seno = calcSeno(n);
	cout << "Seno = " << seno;

	return 0;
}