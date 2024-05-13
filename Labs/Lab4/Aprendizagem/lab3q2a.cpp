#include <iostream>
using namespace std;

int main() {
	int i, n;
	cout << "Entre com um número: ";
	cin >> n;
	for (i = 0; i < 10; i++) {
		cout << n << " X " << i << " = " << n * i << endl;

	}
	return 0;
}