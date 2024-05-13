#include <iostream>
using namespace std;

struct Color 
{
	int r;
	int g;
	int b;
};
Color ler()
{
	Color c{};
	cin.ignore(4);
	cin >> c.r;
	cin.ignore(1);
	cin >> c.g;
	cin.ignore(1);
	cin >> c.b;
	cin.ignore(2);

	return c;
}
void exibir(Color c)
{
	cout << "RGB(" << c.r << "," << c.g << "," << c.b << ")\n";
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
	Color A = ler();
	Color B = ler();

	cout << "Soma = ";
	exibir(operator+(A, B));
	cout << "Mult = ";
	exibir(operator*(A, B));


	return 0;
}



