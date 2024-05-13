#include <iostream>
using namespace std;

template <typename T>

T max5(T vet[]) {
	T maior = vet[0];

	for (int i = 0; i < 5; i++) {
		if (vet[i] > maior) {
			maior = vet[i];
		}
	}

	return maior;
}

int main()
{
	double vetD[5] = {2.3, 4.5, 1.2, 78.4, 24.5};
	int vetI[5] = { 5,2,778,2,6 };

	cout << max5(vetD);
	cout << endl;
	cout << max5(vetI);

	return 0;
}
