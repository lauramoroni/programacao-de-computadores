#include <iostream>
#include <cmath>
using namespace std;

float Absoluto(float n) {
	return sqrt(pow(n, 2));
}
int main() {
	float x, absoluto;
	cout << "Digite um número inteiro: ";
	cin >> x;
	absoluto = Absoluto(x);
	cout << "O valor absoluto é " << absoluto;

	return 0;
}