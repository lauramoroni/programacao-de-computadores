#include <iostream>
#include <cmath>
using namespace std;

void bhaskara(int, int, int);

int main()
{
	int a, b, c;

	cout << "Digite o valor de a, b e c: ";
	cin >> a >> b >> c;

	bhaskara(a, b, c);

	return 0;
}
void bhaskara(int a, int b, int c) {
	int delta = pow(b, 2) - (4 * a * c);
	
	if (delta >= 0) {
		float x1 = (-b + sqrt(delta)) / (2 * a);
		float x2 = (-b - sqrt(delta)) / (2 * a);

		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	else {
		cout << "Não há raízes reais.\n";
	}
}