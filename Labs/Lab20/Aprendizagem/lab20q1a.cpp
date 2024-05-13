#include <iostream>
using namespace std;

int main()
{
	float km, preco;

	cout << "Distancia viagem: ";
	cin >> km;

	if (km <= 200) {
		preco = km * 0.5;
	}
	else if (km <= 400) {
		preco = km * 0.4;
	}
	else {
		preco = km * 0.3;
	}

	cout << "Preço: " << preco;

	return 0;
}