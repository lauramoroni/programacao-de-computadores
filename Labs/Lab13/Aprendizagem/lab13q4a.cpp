#include <iostream>
using namespace std;

enum dia { SEG, TER, QUA, QUI, SEX, SAB, DOM };

int main()
{
	char dias[7][15] = {
	"Segunda-feira", "Ter�a-feira", "Quarta-feira", "Quinta-feira",
	"Sexta-feira", "S�bado", "Domingo"
	};
	
	for (dia i = SEG; i <= DOM; i = dia(i + 1))
		cout << dias[i] << endl;

	return 0;
}