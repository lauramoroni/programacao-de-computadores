#include <iostream>
using namespace std;

int main()
{
	int vet[10] = { 46, 78, 40, 96, 74, 58, 32, 56, 91, 6 };

	int* ptr1 = vet;
	int* ptr2 = vet + 1;

	for (int i = 0; i < 5; i++) {
		cout << "[" << *ptr1 << "," << *ptr2 << "]";
		ptr1 += 2;
		ptr2 += 2;
	}

	cout << "\n";

	return 0;
}