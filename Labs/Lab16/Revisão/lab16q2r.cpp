#include <iostream>
using namespace std;

int main()
{
	char vet[16] = "Pratique muito\0";

	for (int i = 0; i < strlen(vet); i++) {
		cout << vet[i];
	}

	return 0;
}