#include <iostream>
using namespace std;

#define MOLECULA_AGUA 3e-23
#define GALAO 3800 // 4 * 950

int main()
{
	float galao;
	
	cout << "Digite a quantidade de galões de água: ";
	cin >> galao;
	
	float moleculas_agua = (galao * GALAO) / MOLECULA_AGUA;

	cout << "Em " << galao << " galões existem " << moleculas_agua << " ´moléculas de água.\n";

	return 0;
}