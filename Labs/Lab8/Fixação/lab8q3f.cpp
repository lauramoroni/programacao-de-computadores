#include <iostream>
using namespace std;

#define SEGPORANO 3.156e7

double segundos_ano(int);

int main()
{
	int idade;
	cout << "Digite sua idade em anos: ";
	cin >> idade;
	cout << idade << " anos correspondem a " << segundos_ano(idade) << " segundos." << endl;

	cout << fixed;
	cout.precision(1);

	cout << idade << " anos correspondem a " << segundos_ano(idade) << " segundos." << endl;

	return 0;
}
double segundos_ano(int idade) {
	return idade * SEGPORANO;
}
