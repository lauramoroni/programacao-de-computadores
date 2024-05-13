#include <iostream>
#include <cmath>
using namespace std;

float imc(float, float);
double imc(double, double);

int main() 
{
	float imcf = imc(1.75f, 80.0f);
	double imcd = imc(1.75, 80);

	cout << "IMC float: " << imcf << endl;
	cout << "IMC double: " << imcd << endl;

	return 0;

} 
float imc(float altura, float peso) {
	return peso / pow(altura, 2);
}
double imc(double altura, double peso) {
	return peso / pow(altura, 2);
}