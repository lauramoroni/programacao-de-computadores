#include <iostream>
using namespace std;

struct chocolate
{
	char marca[20];
	float peso;
	int caloria;
};

int main()
{
	chocolate lanche = { "Charge", 2.3, 350 };

	cout << "Marca: " << lanche.marca << "\n";
	cout << "Peso: " << lanche.peso << "\n";
	cout << "Caloria: " << lanche.caloria << "\n";

	return 0;
}