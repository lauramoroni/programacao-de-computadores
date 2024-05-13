#include <iostream>
using namespace std;

int main() {
	float largura, comprimento, area, altura, volume;

	cout << "Largura: ";
	cin >> largura;
	cout << "Comprimento: ";
	cin >> comprimento;
	area = largura * comprimento;
	cout << "Área da base: " << area << endl;
	cout << "Altura: ";
	cin >> altura;
	volume = area * altura;
	cout << "Volume do prisma: " << volume << endl;

	return 0;
}