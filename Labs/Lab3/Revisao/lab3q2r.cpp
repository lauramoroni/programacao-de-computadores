#include <iostream>
using namespace std;

int main() {
	int horario, horas, minutos;
	cout << "Que horas são? (Formato HH:MM) ";
	cin >> horas;
	// ignora os dois pontos
	cin.ignore();
	cin >> minutos;
	cout << horas << " horas\n";
	cout << minutos << " minutos.\n";

	return 0;
}