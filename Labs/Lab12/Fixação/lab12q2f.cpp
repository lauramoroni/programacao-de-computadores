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
	chocolate lanche[3] = {
		{ "Charge", 2.3, 350 }, { "Lacta", 5.7, 229 }, { "Garoto", 1.8, 98 }
	};

	cout << "Chocolate 1:\n";
	cout << "Marca: " << lanche[0].marca << "\n";
	cout << "Peso: " << lanche[0].peso << "\n";
	cout << "Caloria: " << lanche[0].caloria << "\n";

	cout << "Chocolate 2:\n";
	cout << "Marca: " << lanche[1].marca << "\n";
	cout << "Peso: " << lanche[1].peso << "\n";
	cout << "Caloria: " << lanche[1].caloria << "\n";

	cout << "Chocolate 3:\n";
	cout << "Marca: " << lanche[2].marca << "\n";
	cout << "Peso: " << lanche[2].peso << "\n";
	cout << "Caloria: " << lanche[2].caloria << "\n";

	return 0;
}