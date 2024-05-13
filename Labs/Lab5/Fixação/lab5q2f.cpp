#include <iostream>
#include <cmath>
using namespace std;

float conversao(float);

int main()
{
	float celsius;
	cout << "Digite uma temperatura em graus Celsius: ";
	cin >> celsius;
	cout << celsius << " graus Celsius equivalem a " << conversao(celsius) << " graus Fahrenheit.";

	return 0;
}
float conversao(float celsius) 
{
	float fahreinheit = (1.8 * celsius) + 32.0;
	return fahreinheit;
}