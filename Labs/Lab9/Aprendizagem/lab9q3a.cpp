#include <iostream>
using namespace std;

int main()
{
	double num;
	cout << "Digite um n�mero real: ";
	cin >> num;

	cout << "A parte inteira: " << int(num) << endl;
	cout << "A parte fracion�ria: " << num - int(num) << endl;

	return 0;
}