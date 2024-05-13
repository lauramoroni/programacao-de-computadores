#include <iostream>
using namespace std;

struct dataa {
	int dia;
	int mes;
	int ano;
};
struct horario {
	int hora;
	int min;
	int seg;
};
struct evento {
	dataa data;
	horario horario;
	char local[20];
};
int main()
{
	evento Evento;
	cout << "Entre com os dados do evento\n";
	cout << "Data (DD/MM/AAAA): ";
	cin >> Evento.data.dia;
	cin.ignore(1);
	cin >> Evento.data.mes;
	cin.ignore(1);
	cin >> Evento.data.ano;

	cout << "\nHorário (HH:MM:SS): ";
	cin >> Evento.horario.hora;
	cin.ignore(1);
	cin >> Evento.horario.min;
	cin.ignore(1);
	cin >> Evento.horario.seg;

	cout << "\nLocal: ";
	cin >> Evento.local;

	return 0;

}