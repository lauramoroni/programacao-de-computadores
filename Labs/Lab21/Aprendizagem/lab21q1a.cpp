#include <iostream>
using namespace std;

int main()
{
	char ch = 'm';
	int idade = 28;
	int x = 43;
	int num = 40;
	float peso = 56, altura = 171;
	
	bool c1 = (ch != 'q' && ch != 'k');
	bool c2 = (idade < 15 || idade > 26);
	bool c3 = (x % 2 == 1 && x > 30);
	bool c4 = (num % 5 == 0 && num % 8 == 0);
	bool c5 = (peso > 50 && altura > 160);

	cout << c1 << c2 << c3 << c4 << c5;
}