#include <iostream>
using namespace std;

struct Horario {
	int hora;
	int min;
};
Horario lerHora();
void exibirHora(Horario hora);
int operator-(Horario inicio, Horario final);
int main()
{
	Horario inicio = lerHora();
	exibirHora(inicio);
	Horario fim = lerHora();
	exibirHora(fim);

	int duracao = operator-(inicio, fim);

	int hora, min;
	hora = duracao / 60;
	min = duracao % 60;

	cout << "Entre " << inicio.hora << ":" << inicio.min << " e " << fim.hora << ":"
		<< fim.min << " existem " << duracao << " minutos, isto é, " << hora << " hora e "
		<< min << " minutos.";
	return 0;
}
Horario lerHora() {
	Horario hora;

	cout << "Início: ";
	cin >> hora.hora;
	cin.ignore(1);
	cin >> hora.min;

	return hora;
}
void exibirHora(Horario hora) {
	cout << hora.hora << ":" << hora.min << "\n";
}
int operator-(Horario inicio, Horario final) {
	int inicioMinutos = inicio.hora * 60 + inicio.min;
	int fimMinutos = final.hora * 60 + final.min;
	return fimMinutos - inicioMinutos;
}