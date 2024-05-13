#include <iostream>
using namespace std;

int main() {
	float peso, hora, min, total_calorias;
	char sep;

	cout << "Digite seu peso em quilos: ";
	cin >> peso;

	cout << "Digite o tempo de corrida: ";
	cin >> hora >> sep >> min >> sep;
	total_calorias = 7 * peso * (((hora * 60) + min) / 60);

	cout << "Digite o tempo de ciclismo: ";
	cin >> hora >> sep >> min >> sep;
	total_calorias += 7 * peso * (((hora * 60) + min) / 60); 

	cout << "Digite o tempo de corrida: ";
	cin >> hora >> sep >> min >> sep;
	total_calorias += 8 * peso * (((hora * 60) + min) / 60);

	cout << "Você gastou um total de " << total_calorias << " calorias.";

	return 0;
}