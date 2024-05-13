#include <iostream>
using namespace std;

int converter(int horas, int minutos) {
	

	int total_minutos = (horas * 60) + minutos;
	return total_minutos;
}
int main() {
	int peso, corrida, ciclismo, natacao;
	double calorias_corrida, calorias_ciclismo, calorias_natacao, total_calorias, total_minutos;

	cout << "Digite seu peso em quilos: ";
	cin >> peso;

	cout << "Digite o tempo de corrida: ";
	cin >> corrida;
	corrida = converter(corrida,0);

	cout << "Digite o tempo de ciclismo: ";
	cin >> ciclismo;
	ciclismo = converter(ciclismo,0);

	cout << "Digite o tempo de natação: ";
	cin >> natacao;
	natacao = converter(natacao,0);

	calorias_corrida = 7 * peso * (corrida / 60.0);
	calorias_ciclismo = 7 * peso * (ciclismo / 60.0);
	calorias_natacao = 7 * peso * (natacao / 60.0);
	total_calorias = calorias_ciclismo + calorias_corrida + calorias_natacao;

	cout << "Você gastou um total de " << total_calorias << " calorias.";

	return 0;
}