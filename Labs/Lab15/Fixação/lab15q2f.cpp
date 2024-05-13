#include <iostream>
using namespace std;

struct balao
{
	float diametro;
	char marca[20];
	int modelo;
};
int main()
{
	balao* var = new balao;

	cout << "Diametro: ";
	cin >> var->diametro;
	cout << endl;
	cout << "Marca: ";
	cin >> var->marca;
	cout << endl;
	cout << "Modelo: ";
	cin >> var->modelo;
	cout << endl;

	cout << var->modelo << " " << var->diametro << " " << var->marca;

	delete var;
	return 0;
}