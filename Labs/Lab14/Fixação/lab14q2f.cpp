#include <iostream>
using namespace std;

int main() {
	char ch = 'A';
	char* ptr = &ch; // o ponteiro aponta para o endere�o de ch

	*ptr = 'B';  // o conte�do que o ponteiro aponta muda para B

	cout << "ch: " << ch << endl;
	cout << "ptr: " << *ptr << endl;
}