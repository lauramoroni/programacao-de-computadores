#include <iostream>
using namespace std;

int main() {
	int hora_chegada, minuto_chegada, hora_partida, minuto_partida, minuto_partida_total, minuto_chegada_total;
	char sep;

	cout << "Digite o horário de partida (HH:MM): ";
	cin >> hora_chegada;
	cin >> sep;
	cin >> minuto_chegada;
	cout << "Digite o horário de chegada (HH:MM): ";
	cin >> hora_partida;
	cin >> sep;
	cin >> minuto_partida;

	minuto_partida_total = (hora_partida * 60) + minuto_partida;
	minuto_chegada_total = (hora_chegada * 60) + minuto_chegada;

	float horas = (minuto_partida_total - minuto_chegada_total) / 60;
	float minutos = (minuto_partida_total - minuto_chegada_total) % 60;

	cout << "O tempo total de viagem foi " << horas << " horas e " << minutos << "min.";

	return 0;
} 
