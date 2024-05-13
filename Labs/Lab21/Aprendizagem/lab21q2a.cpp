#include <iostream>
using namespace std;

bool primo(int);

int main()
{
	int num;
	bool ans = true;

	cout << "Informe um número inteiro: ";
	cin >> num;

	while (num > 0) {
		if (primo(num)) {
			cout << "Primo\n";
		}
		else {
			cout << "Normal\n";
		}

		cout << "Informe um número inteiro: ";
		cin >> num;
	}

	return 0;
}
bool primo(int num)
{
	if (num <= 1) {
		return false;
	} 
	for (int i = 2; i < num - 1; i++) {
		if (num % i == 0) {
			return false;
		}
	}
		return true;
}