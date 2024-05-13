#include <iostream>
using namespace std;

int main()
{
	double daiane = 100, celia = 100;
	int i = 0;

	do
	{
		daiane += 10; // 0.1 * 100
		celia += 0.05 * celia; // 5% por rendimento final do ano

		i += 1;
	} while (daiane >= celia);

	cout << fixed;
	cout.precision(2);

	cout << "Se passaram " << i << " anos para os saldos atingirem os valores\n";
	cout << "Daiane: " << daiane << "\n";
	cout << "Celia: " << celia << "\n";

	return 0;
}