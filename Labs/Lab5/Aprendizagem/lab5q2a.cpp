#include <iostream>
using namespace std;

float aumentoSalario(float salario) {
	return salario + (0.15 * salario);
}
int main() {
	float salario;
	cout << "Salário atual: ";
	cin >> salario;
	cout << "Salário ajustado para " << aumentoSalario(salario);

	return 0;
}