#include <iostream>
using namespace std;

int main() {
	int anos, cigarros_dia, cigarros_total;
	float valor, valor_total;

	cout << "A quantos anos voc� fuma? ";
	cin >> anos;
	cout << "Quantos cigarros voc� fuma por dia? ";
	cin >> cigarros_dia;
	cout << "Qual o pre�o m�dio de uma carteira de cigarros? ";
	cin >> valor;
	cigarros_total = cigarros_dia * (anos * 365);
	valor_total = (valor / 20) * cigarros_total;

	cout << "Voc� gastou at� agora R$" << valor_total << " com cigarros.\n";

	return 0;
}