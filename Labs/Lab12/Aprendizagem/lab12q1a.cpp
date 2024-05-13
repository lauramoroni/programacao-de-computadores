#include <iostream>
using namespace std;

struct contaBancaria {
	int id;
	char nome[20];
	float saldo;
};
void ContaBancaria(contaBancaria dadosBanco);

/*
int main()
{
	contaBancaria dadosBanco;
	dadosBanco.saldo = 0;

	cout << "Entre com os dados da conta: ";
	cin >> dadosBanco.id >> dadosBanco.nome >> dadosBanco.saldo;

	cout << "Nome: " << dadosBanco.nome << "\n";
	cout << "ID: " << dadosBanco.id << "\n";
	cout << "Saldo: " << dadosBanco.saldo << "\n";

	double deposito;
	cout << "Quanto você deseja depositar na conta?\n";
	cin >> deposito;
	dadosBanco.saldo += deposito;

	cout << "Nome: " << dadosBanco.nome << "\n";
	cout << "ID: " << dadosBanco.id << "\n";
	cout << "Saldo: " << dadosBanco.saldo << "\n";

	return 0;
}
*/