#include <iostream>
using namespace std;

int main()
{
	int soma = 0;
	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			soma += i;
		}
	}

	cout << "Soma: " << soma;

	return 0;
}