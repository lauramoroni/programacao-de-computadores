#include <iostream>
#include <cmath>
using namespace std;

float mediaHarmonica(float x, float y) {
	return 2.0 * x * y / (x + y);
}
int main() {
	float a, b;
	cout << "Entre com um número: ";
	cin >> a;
	cout << "Entre com outro número: ";
	cin >> b;
	cout << "A média harmônica dos números é " << mediaHarmonica(a, b);

	return 0;
}