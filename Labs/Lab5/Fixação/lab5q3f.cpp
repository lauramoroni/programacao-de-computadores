#include <iostream>
#include <cmath>
using namespace std;

float mediaHarmonica(float x, float y) {
	return 2.0 * x * y / (x + y);
}
int main() {
	float a, b;
	cout << "Entre com um n�mero: ";
	cin >> a;
	cout << "Entre com outro n�mero: ";
	cin >> b;
	cout << "A m�dia harm�nica dos n�meros � " << mediaHarmonica(a, b);

	return 0;
}