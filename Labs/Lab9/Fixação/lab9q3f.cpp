#include <iostream>
using namespace std;

#define HORASDIA 24
#define MINHORAS 60
#define SEGMIN 60

int main()
{
	int seg;
	cout << "Digite a quantidade de segundos: ";
	cin >> seg;

	int dias, horas, minutos, segundos, resto;
	
	dias = seg / (HORASDIA * MINHORAS * SEGMIN);
	resto = seg % (HORASDIA * MINHORAS * SEGMIN);
	horas = resto / (MINHORAS * SEGMIN);
	resto = resto % (MINHORAS * SEGMIN);
	minutos = resto / SEGMIN;
	segundos = resto % SEGMIN;

	cout << seg << " segundos = " << dias << " dias " << horas << " horas " << minutos << " minutos " << segundos << " segundos.\n";

	return 0;

}