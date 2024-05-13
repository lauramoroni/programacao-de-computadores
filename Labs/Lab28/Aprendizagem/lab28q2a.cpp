#include <iostream>
using namespace std;

struct tupla
{
	int a;
	int b;
	int c;
};

void troca(tupla &, tupla &);

int main() {
	tupla a, b;

	cout << "Tupla A: ";
	cin >> a.a >> a.b >> a.c;
	cout << "Tupla B: ";
	cin >> b.a >> b.b >> b.c;

	troca(a, b);

	cout << "Tupla A: ";
	cout << a.a << " " << a.b << " " << a.c;
	cout << "\nTupla B: ";
	cout << b.a << " " << b.b << " " << b.c;
}

void troca(tupla& a, tupla& b) {
	cout << "Invertendo...\n";

	tupla aux;
	aux.a = a.a;
	aux.b = a.b;
	aux.c = a.c;

	a.a = b.a;
	a.b = b.b;
	a.c = b.c;

	b.a = aux.a;
	b.b = aux.b;
	b.c = aux.c;
}