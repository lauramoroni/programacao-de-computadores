#include <iostream>
#include <cmath>
using namespace std;

float Absoluto(float n) {
	return sqrt(pow(n, 2));
}
int main() {
	float x, absoluto;
	cout << "Digite um n�mero inteiro: ";
	cin >> x;
	absoluto = Absoluto(x);
	cout << "O valor absoluto � " << absoluto;

	return 0;
}