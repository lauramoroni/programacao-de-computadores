#include <iostream>
using namespace std;

int main()
{
	int* ptr = new int;
	*ptr = 100;

	cout << "Conte�do armazenado: " << *ptr;
	cout << "\nDigite novo valor para esse bloco de mem�ria: ";
	cin >> *ptr;

	delete ptr;
	return 0;
}