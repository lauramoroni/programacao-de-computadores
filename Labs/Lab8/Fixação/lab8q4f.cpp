#include <iostream>
using namespace std;

#define MOLECULA_AGUA 3e-23
#define GALAO 3800 // 4 * 950

int main()
{
	float galao;
	
	cout << "Digite a quantidade de gal�es de �gua: ";
	cin >> galao;
	
	float moleculas_agua = (galao * GALAO) / MOLECULA_AGUA;

	cout << "Em " << galao << " gal�es existem " << moleculas_agua << " �mol�culas de �gua.\n";

	return 0;
}