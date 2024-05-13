#include <iostream>
using namespace std;

int main()
{
	char palavra[30];
	int pos;

	cout << "Digite uma palavra: ";
	cin >> palavra;

	pos = strlen(palavra) - 1;

	cout << "Em " << palavra << " a última letra é " << palavra[pos];

	return 0;
}