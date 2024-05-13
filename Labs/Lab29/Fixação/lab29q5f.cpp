#include <iostream>
using namespace std;

template <typename T>

T maxn(T vet[], int i) {
	T maior = vet[0];

	for (int j = 0; j < i; j++) {
		if (vet[j] > maior) {
			maior = vet[j]; 
		}
	}

	return maior;
}

int main()
{
	int vetI[6] = { 2,6,87,2,5,7 };
	double vetD[4] = { 2.3,5.6,1.0,8.7 };

	cout << maxn(vetI, 6) << endl << maxn(vetD, 4);

	return 0;
}