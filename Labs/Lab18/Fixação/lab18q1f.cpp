#include <iostream>
using namespace std;

int main()
{
	int n;
	int soma_parcial = 0;

	cout << "Digite números inteiros (0 para finalizar): ";
	do
	{
		cin >> n;
		cout << endl;
		soma_parcial += n;
		cout << "Soma parcial: " << soma_parcial << endl;

	} while (n != 0);

	return 0;
}