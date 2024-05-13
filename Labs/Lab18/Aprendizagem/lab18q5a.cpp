#include <iostream>
using namespace std;

int main()
{
	int idade, maior = 0;

	cout << "Digite as idades do grupo:\n";

	do {
		cin >> idade;
		if (idade > 18) {
			maior += 1;
		}
	} while (idade != 0);

	cout << "Nesse grupo " << maior << " pessoas são maiores de idade.\n";

	return 0;
}