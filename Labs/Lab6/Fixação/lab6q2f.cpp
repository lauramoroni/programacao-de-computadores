#include <iostream>
using namespace std;

int main() {
	int distancia, litros;
	float consumo;

	cout << "Dist�ncia percorrida (km): ";
	cin >> distancia;
	cout << "Litros de combust�vel: ";
	cin >> litros;

	consumo = distancia / litros;

	cout << "O consumo do seu carro foi de " << consumo << " km/litro.";

	return 0;
}