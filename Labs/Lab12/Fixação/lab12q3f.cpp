#include <iostream>
using namespace std;

struct evento
{
	short dia;
	short mes;
	short ano;
};
int dias_vida(evento, evento);
int main()
{
	evento aniversario, atual; 
	cout << "Data de nascimento (DD/MM/AAAA): ";
	cin >> aniversario.dia;
	cin.ignore(1);
	cin >> aniversario.mes;
	cin.ignore(1);
	cin >> aniversario.ano;
	cout << "\n";

	cout << "Data de hoje (DD/MM/AAAA): ";
	cin >> atual.dia;
	cin.ignore(1);
	cin >> atual.mes;
	cin.ignore(1);
	cin >> atual.ano;
	cout << "\n";

	int dias = dias_vida(aniversario, atual);
	cout << "Você tem " << dias << " dias de vida.\n";

	return 0;
}
int dias_vida(evento aniversario, evento atual) {
	const int DiasPorMes = 31;
	const int DiasPorAno = 365;

	int inicio = (aniversario.ano * DiasPorAno) + ((aniversario.mes - 1) * DiasPorMes) + aniversario.dia;
	int fim = (atual.ano * DiasPorAno) + ((atual.mes - 1) * DiasPorMes) + atual.dia;

	return fim - inicio;
}