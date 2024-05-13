#include <iostream>
using namespace std;

double soma(double x, double y)
{
	return x + y;
}
double produto(double x, double y)
{
	return x * y;
}

double calcular(double, double, double(*ptr)(double, double));

int main() {

	double a, b;

	cin >> a >> b;

	while (a != 0 && b != 0) {
		cout << calcular(a, b, soma);
		cout << endl;
		cout << calcular(a, b, produto);
		cout << endl;
		cin >> a >> b;
	}

	return 0;
}

double calcular(double x, double y, double(*ptr)(double, double)) {
	double res = (*ptr)(x, y);

	return res;
}