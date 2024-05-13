#include <iostream>
using namespace std;

int main()
{
	int vet[10] = {32, 16, 47, 10, 82, 29, 30, 28, 15, 64 };
	for (int i = 0; i < 5; i++) {
		cout << "[" << vet[i] << "," << vet[i + 1] << "] ";
	}

	return 0;
}