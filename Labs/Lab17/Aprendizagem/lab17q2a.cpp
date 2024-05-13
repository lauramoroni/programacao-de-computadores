#include <iostream>
using namespace std;

int main()
{
	int tam;
	cout << "Você quer que eu conte de 1 até quanto? ";
	cin >> tam;

	int i = 1;
	for (i; i <= tam; i++) {
		cout << i << " ";
	}
	cout << endl;
	for (int j = tam; j >= 0; j--) {
		cout << j << " ";
	}
	cout << endl;
	for (i; i < tam; i += 2) {
		cout << i << " ";
	}
	cout << endl;
	for (int j = tam-1; j > 0; j -= 2) {
		cout << j << " ";
	}
	cout << endl;
	for (i; i <= tam; i += 2) {
		cout << i << " ";
	}
	cout << endl;
	for (int j = tam; j >= 0; j -= 2) {
		cout << j << " ";
	}
	cout << endl;
	return 0;
}