#include <iostream>]
using namespace std;

struct datacao {
	int dia, mes, ano;
};
struct horario {
	int hora, min;
};
int main()
{
	datacao evento[10];
	horario hora[10];
	char descricao[10][18];

	cout << "Entre com 2 eventos:\n";

	cout << "#1\n";
	cout << "Data: ";
	cin >> evento[0].dia;
	cin >> evento[0].mes;
	cin >> evento[0].ano;
	cout << "Hora: ";
	cin >> hora[0].hora;
	cin >> hora[0].min;
	cout << "Descrição: ";
	cin >> descricao[0];

	cout << "#2\n";
	cout << "Data: ";
	cin >> evento[1].dia;
	cin >> evento[1].mes;
	cin >> evento[1].ano;
	cout << "Hora: ";
	cin >> hora[1].hora;
	cin >> hora[1].min;
	cout << "Descrição: ";
	cin >> descricao[1];

	cout << "--------------------\n";
	cout << "Eventos cadastrados\n";
	cout << evento[0].dia << "/" << evento[0].mes << "/" << evento[0].ano << " ";
	cout << hora[0].hora << ":" << hora[0].min << " ";
	cout << descricao[0] << "\n";

	cout << evento[1].dia << "/" << evento[1].mes << "/" << evento[1].ano << " ";
	cout << hora[1].hora << ":" << hora[1].min << " ";
	cout << descricao[1] << "\n";

	return 0;
}