#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "Digite um número positivo ou negativo: ";
	cin >> num;

	// 1° forma
	if (num >= 0)
		cout << num << endl;
	else
		cout << -num << endl;

	// 2° forma
	cout << (num >= 0 ? num : -num);
}