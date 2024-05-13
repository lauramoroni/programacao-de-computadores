#include <iostream>
using namespace std;

int main()
{
	double num;
	cout << "Digite um número real: ";
	cin >> num;

	cout << "A parte inteira: " << int(num) << endl;
	cout << "A parte fracionária: " << num - int(num) << endl;

	return 0;
}