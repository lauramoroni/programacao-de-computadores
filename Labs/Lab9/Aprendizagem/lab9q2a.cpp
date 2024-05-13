#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Digite dois números inteiros: ";
	cin >> x >> y;
	
	int quociente = x / y;
	int resto = x % y;
	cout << "O quociente " << x << "/" << y << " e´" << quociente << endl;
	cout << "O resto " << x << "%" << y << " e´" << resto << endl;

	return 0;
}