#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num;
	string strnum;

	cout << "Entre com dois n�meros: ";
	cin >> num >> strnum;
	int produto = num * stoi(strnum);
	cout << "A multiplica��o entre eles � " << produto;

	return 0;
}