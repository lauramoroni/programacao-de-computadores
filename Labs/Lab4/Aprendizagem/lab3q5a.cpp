#include <iostream>
using namespace std;

int main() {
	int hora, minuto; 
	cout << "Que horas são? ";
	cin >> hora;
	// armazena os dois pontos em uma variável
	char dois_pontos;
	cin >> dois_pontos;
	cin >> minuto;
	// adianta a hora
	hora += 1;
	cout << "O seu relógio está atrasado.\n";
	cout << "Agora são " << hora << dois_pontos << minuto;

	return 0;
}