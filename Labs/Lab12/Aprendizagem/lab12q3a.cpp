#include <iostream>
#include "lab12q1a.cpp"
#include "lab12q2a.cpp"
using namespace std;

int main()
{
	// Inicializando palavras
	palavra dicionario[10] =
	{
		{"Amor", "Love", "Amor"},
		{"Morte", "Death", "Muerte"}
	};

	// Acrescentando uma palavra
	cout << "Entre com uma palavra:\n";
	cout << "Portugu�s: ";
	cin >> dicionario[2].portugues;
	cout << "\nIngl�s: ";
	cin >> dicionario[2].ingles;
	cout << "\nEspanhol: ";
	cin >> dicionario[2].espanhol;

	// Mostrando as palavras do dicion�rio
	Palavra(dicionario[0]);
	Palavra(dicionario[1]);
	Palavra(dicionario[2]);

	// Criando conta banc�ria
	contaBancaria dadosBanco;
	dadosBanco.saldo = 0;

	cout << "== Entre com os dados da conta ==\n";
	cout << "ID:";
	cin >> dadosBanco.id;
	cout << "\nNome: ";
	cin >> dadosBanco.nome;
	cout << "\nSaldo: ";
	cin >> dadosBanco.saldo;
	cout << "\n";



	// Exibir conta banc�ria
	ContaBancaria(dadosBanco);

	// Dep�sito
	double deposito;
	cin >> deposito;
	dadosBanco.saldo += deposito;

	// Exibir novamente conta banc�ria
	ContaBancaria(dadosBanco);

	return 0;
}
void ContaBancaria(contaBancaria dadosBanco)
{
	cout << "Nome: " << dadosBanco.nome << "\n";
	cout << "ID: " << dadosBanco.id << "\n";
	cout << "Saldo: " << dadosBanco.saldo << "\n";
}
void Palavra(palavra dicionario) 
{
	cout << "Portugu�s: " << dicionario.portugues << "\n";
	cout << "Ingl�s: " << dicionario.ingles << "\n";
	cout << "Espanhol: " << dicionario.espanhol << "\n";
}