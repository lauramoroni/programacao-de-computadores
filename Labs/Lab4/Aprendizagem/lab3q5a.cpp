#include <iostream>
using namespace std;

int main() {
	int hora, minuto; 
	cout << "Que horas s�o? ";
	cin >> hora;
	// armazena os dois pontos em uma vari�vel
	char dois_pontos;
	cin >> dois_pontos;
	cin >> minuto;
	// adianta a hora
	hora += 1;
	cout << "O seu rel�gio est� atrasado.\n";
	cout << "Agora s�o " << hora << dois_pontos << minuto;

	return 0;
}