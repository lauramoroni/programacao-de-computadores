#include <iostream>
using namespace std;

int main() {
	char ch = 'A';
	char* ptr = &ch; // o ponteiro aponta para o endereço de ch

	*ptr = 'B';  // o conteúdo que o ponteiro aponta muda para B

	cout << "ch: " << ch << endl;
	cout << "ptr: " << *ptr << endl;
}