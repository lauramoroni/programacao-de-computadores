#include <iostream>
using namespace std;

#define KMMETROS 1000

int main()
{
	int distancia;
	cout << "Entre com a distância em metros: ";
	cin >> distancia;

	int km = distancia / KMMETROS;
	int metros = distancia - (km * KMMETROS);

	cout << distancia << " metros equivalem a " << km << " quilometros e " << metros << " metros.";

	return 0;
}