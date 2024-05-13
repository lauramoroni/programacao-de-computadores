#include <iostream>
using namespace std;

struct carros
{
	char modelo[20];
	int ano;
	float preco;
};
float valor(float, float);
int main()
{
	carros* car = new carros[2];

	cout << "Entre com os dados de 2 carros:\n";
	cin >> car[0].modelo >> car[0].ano >> car[0].preco;
	cin >> car[1].modelo >> car[1].ano >> car[1].preco;
	cout << "\n";

	cout << "O valor total é R$" << valor(car[0].preco, car[1].preco) << endl;

	delete[] car;
	return 0;
}
float valor(float a, float b) {
	float total = a + b;
	return total;
}