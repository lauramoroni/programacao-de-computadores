#include <iostream>
using namespace std;

float aumentoSalario(float salario) {
	return salario + (0.15 * salario);
}
int main() {
	float salario;
	cout << "Sal�rio atual: ";
	cin >> salario;
	cout << "Sal�rio ajustado para " << aumentoSalario(salario);

	return 0;
}