#include <iostream>
using namespace std;

void cont();

void cont() {
	static int i = 0;
	cout << ++i << "a chamada da funcao.\n";
}

int main() {
	for (int i = 0; i < 3; ++i)
		cont();

	return 0;
}