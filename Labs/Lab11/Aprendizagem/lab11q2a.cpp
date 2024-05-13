#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num;
	string strnum;

	cout << "Entre com dois números: ";
	cin >> num >> strnum;
	int produto = num * stoi(strnum);
	cout << "A multiplicação entre eles é " << produto;

	return 0;
}