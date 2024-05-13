#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cctype>
using namespace std;


int main()
{
	cout << "Loja de Informática\n";

	char ans = {'S'};
	char produto[20];
	float preco, total = 0;
	char mais_caro[20];
	float parametro = 0;
	int cont = 0;

	while (toupper(ans) == 'S')
	{
		cout << "-------------------\n";
		cout << "Produto: "; cin >> produto;
		cout << "Preço: "; cin >> preco;

		total += preco;

		// guarda maior valor
		if (preco > parametro)
		{
			parametro = preco;
			strcpy(mais_caro, produto);
		}

		// guarda produtos maiores que mil
		if (preco > 1000)
			cont += 1;

		cout << "Deseja continuar? [S/N] ";
		cin >> ans;
		ans = toupper(ans);
	}

	cout << "Total da compra: R$" << total << endl;
	cout << cont << " produtos custam mais de R$1000.\n";
	cout << mais_caro << " é o produto mais caro.\n";

}