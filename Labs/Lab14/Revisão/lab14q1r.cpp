#include <iostream>
using namespace std;

int main() {
	double litros = 3.4;
	double* ptr = &litros;

	cout << "O valor de litros é " << *ptr;
}