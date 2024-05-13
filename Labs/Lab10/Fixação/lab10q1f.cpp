#include <iostream>
using namespace std;


int main()
{
	float produtos[3] = { 1.5f, 2.0f, 1.0f };
	float quantidade[3];

	cout << "Prezado Cliente,\nDigite a quantidade de quilos desejados\n";
	cout << "Alface: ";
	cin >> quantidade[0];
	cout << "Beterraba: ";
	cin >> quantidade[1];
	cout << "Cenoura: ";
	cin >> quantidade[2];
	cout << endl;

	float total_alface, total_beterraba, total_cenoura, total;
	total_alface = quantidade[0] * produtos[0];
	total_beterraba = quantidade[1] * produtos[1];
	total_cenoura = quantidade[2] * produtos[2];

	cout << "Resumo da Compra\n----------------------\n";
	cout << "Alface = R$" << total_alface << endl;
	cout << "Beterraba = R$" << total_beterraba << endl;
	cout << "Cenoura = R$" << total_cenoura << endl;
	cout << "----------------------\n";

	total = total_alface + total_beterraba + total_cenoura;

	cout << "Total = R$" << total;

	return 0;
}