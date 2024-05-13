#include <iostream>
using namespace std;

int main()
{
	int* ptr = new int;
	*ptr = 100;

	cout << "Conteúdo armazenado: " << *ptr;
	cout << "\nDigite novo valor para esse bloco de memória: ";
	cin >> *ptr;

	delete ptr;
	return 0;
}