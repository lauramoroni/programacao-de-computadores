#include <iostream>
using namespace std;

struct peixe {
	string tipo = "piaba";
	float peso = 50.4;
	int comp = 6;
};

int main() {
	peixe piaba;
	peixe* ptr = &piaba;

	cout << ptr->tipo;
	cout << ptr->peso;
	cout << ptr->comp;
 }