#include <iostream>
using namespace std;

struct Color
{
	int r;
	int g;
	int b;
};
istream& operator>>(istream& is, Color& entrada)
{
	cin.ignore(4);
	cin >> entrada.r;
	cin.ignore();
	cin >> entrada.g;
	cin.ignore();
	cin >> entrada.b;
	cin.ignore(2);

	return is;
}
ostream& operator<<(ostream& os, Color& saida)
{
	os << "RGB(";
	os << saida.r << ",";
	os << saida.g << ",";
	os << saida.b << ")";
}
Color operator+(Color a, Color b)
{
	Color resultado;
	resultado.r = a.r + b.r;
	resultado.g = a.g + b.g;
	resultado.b = a.b + b.b;

	if (resultado.r > 255) resultado.r = 255;
	if (resultado.g > 255) resultado.g = 255;
	if (resultado.b > 255) resultado.b = 255;

	return resultado;
}
Color operator*(Color a, Color b)
{
	Color resultado;
	resultado.r = a.r * b.r;
	resultado.g = a.g * b.g;
	resultado.b = a.b * b.b;

	if (resultado.r > 255) resultado.r = resultado.r / 255;
	if (resultado.g > 255) resultado.g = resultado.g / 255;
	if (resultado.b > 255) resultado.b = resultado.b / 255;

	return resultado;
}
int main()
{
	cout << "Digite duas cores:\n"; 
	Color a, b; 
	cin >> a; 
	cin >> b;

	Color soma = a + b;
	Color prod = a * b;

	cout << "Soma = " << soma << "\n";
	cout << "Produto = " << prod << "\n";

	return 0;
}



