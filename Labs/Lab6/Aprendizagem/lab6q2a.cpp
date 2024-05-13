#include <iostream>
#define pao 0.30
#define pastel 0.25
using namespace std;

float custo_total(int a, int b);
int main() 
{
	int quantidade_pao, quantidade_pastel;

	cout << "Pão&Cia\n";
	cout << "Quantos pães? ";
	cin >> quantidade_pao;
	cout << "Quantos pastéis? ";
	cin >> quantidade_pastel;
	cout << "O total das compras é R$ " << custo_total(quantidade_pao, quantidade_pastel);

}
float custo_total(int a, int b) {
	return (a * pao) + (b * pastel);
}