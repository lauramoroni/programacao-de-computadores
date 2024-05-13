#include <iostream>
using namespace std;

struct peixe
{
	char tipo[20];
	float peso;
	unsigned comp;
};
int main()
{
	// Como criar uma variável de tipo peixe
	peixe piaba = { "piaba", 50.6, 4 };

	// Como alocar dinamicamente um registro de tipo peixe
	peixe* p = new peixe;
}