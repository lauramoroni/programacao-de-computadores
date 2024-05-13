#include <iostream>
using namespace std;

int multiplos(int);
int main()
{
	int soma = 0;

	for (int i = 0; i < 1000; i++) {
		soma += multiplos(i);
	}

	cout << "Soma: " << soma << endl;
}
int multiplos(int num)
{
	int soma = 0;
	if (num % 5 == 0 || num % 3 == 0) {
		soma += num;
	}

	return soma;
}