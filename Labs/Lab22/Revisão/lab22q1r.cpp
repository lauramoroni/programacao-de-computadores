#include <iostream>
using namespace std;

int main()
{
	int num, abs;

	cout << "Digite um n�mero positivo ou negativo: ";
	cin >> num;

	if (num >= 0) {
		abs = num;
	}
	else {
		abs = -num;
	}

	cout << "O valor absoluto de " << num << " � " << abs << "\n";

	return 0;
}