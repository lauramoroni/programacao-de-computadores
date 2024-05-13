#include <iostream>
using namespace std;

int main() {
	float altura, largura, comprimento;
	cout << "Informe altura, largura e comprimento: ";
	cin >> altura;
	cin >> largura;
	cin >> comprimento;

	// calcula o volume 
	float volume = altura * largura * comprimento;
	cout << "O volume é " << volume << " cm cúbicos.";

	return 0;
}