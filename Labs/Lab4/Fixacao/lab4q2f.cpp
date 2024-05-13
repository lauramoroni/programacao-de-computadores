#include <iostream>
using namespace std;

void Pequena();
void Media();
void Grande();

void Linha() {
	cout << "----------";
}
void Grande() {
	int i;
	for (i = 0; i < 3; i++) {
		Linha();
	}
}
void Media() {
	int i;
	for (i = 0; i < 2; i++) {
		Linha();
	}
}
void Pequena() {
	Linha();
}
int main() {
	Pequena();
	cout << endl;
	Media();
	cout << endl;
	Grande();
	cout << endl;
	cout << "Programação de Computadores" << endl;;
	Grande();
	cout << endl;
	Media();
	cout << endl;
	Pequena();
	cout << endl;

	return 0;
}