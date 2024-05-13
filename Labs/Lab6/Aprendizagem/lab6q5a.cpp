#include <iostream>
#include <climits>
using namespace std;

bool isShort(int);
bool isInt(int);
int main() 
{
	int n;
	cout << "Digite um valor inteiro: ";
	cin >> n;

	if (isShort(n)) {
		cout << n << " cabe em 16 bits\n";
	}
	else {
		cout << n << " não cabe em 16 bits\n";
	}
	if (isInt(n)) {
		cout << n << " cabe em 32 bits";
	}
	else {
		cout << n << " não cabe em 32 bits";
	}
	return 0;
}
bool isShort(int n)
{
	if (n <= SHRT_MAX) {
		return true;
	}
	else {
		return false;
	}
}
bool isInt(int n)
{
	if (n <= INT_MAX) {
		return true;
	}
	else {
		return false;
	}
}