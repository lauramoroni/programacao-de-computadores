#include <iostream>
using namespace std;

// enumera��o para meses
enum mes { Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez };

// constantes string para meses
const char meses[12][20] =
{
	"Janeiro",
	"Fevereiro",
	"Marco",
	"Abril",
	"Maio",
	"Junho",
	"Julho",
	"Agosto",
	"Setembro",
	"Outubro",
	"Novembro",
	"Dezembro"
};

// prot�tipos das fun��es
istream& operator>>(istream&, mes&);
ostream& operator<<(ostream&, mes&);


int main()
{
	mes inicio, fim;	// cria vari�veis do tipo m�s

	inicio = Mar;		// inicio do semestre
	fim = Jun;			// fim do semestre

	cout << "Digite o n�mero do mes atual: ";
	mes atual;
	cin >> atual;		// l� o m�s atual para uma vari�vel inteira

	if (atual >= inicio && atual <= fim)
		cout << "Em " << atual << " voce esta em periodo de aulas.\n";
	else
		cout << "Em " << atual << " voce esta em ferias!\n";

	return 0;
}

// usando cin com mes
istream& operator>>(istream& is, mes& m)
{
	int temp;
	is >> temp;

	if (temp >= Jan && temp <= Dez)
		m = mes(temp);

	return is;
}

// usando cout com mes
ostream& operator<<(ostream& os, mes& m)
{
	os << meses[m - 1];

	return os;
}
