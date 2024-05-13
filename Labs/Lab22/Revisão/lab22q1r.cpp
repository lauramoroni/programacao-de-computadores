#include <iostream>
using namespace std;

int main()
{
	int num, abs;

	cout << "Digite um número positivo ou negativo: ";
	cin >> num;

	if (num >= 0) {
		abs = num;
	}
	else {
		abs = -num;
	}

	cout << "O valor absoluto de " << num << " é " << abs << "\n";

	return 0;
}