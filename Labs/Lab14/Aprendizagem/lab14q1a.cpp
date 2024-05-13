#include <iostream>
using namespace std;

struct Tigela
{
	string estado;
	string alimento;
};
void Fome(Tigela* p);
int main()
{
	Tigela janta = {"cheia", "canja"};
	Tigela* ptr = &janta;

	cout << "Antes: " << ptr->estado << endl;

	Fome(ptr);
	cout << "Depois: " << ptr->estado << endl;

	return 0;
}
void Fome(Tigela* p)
{
	p->estado = "vazia";
}
