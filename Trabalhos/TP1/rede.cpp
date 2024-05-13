#include <iostream>
#include "rede.h"
#include "pacote.h"
#include "cores.h"

using namespace std;

	// Variável global que representa a rede
int rede;

void transmitir(unsigned int passo, unsigned int cor, unsigned int pos, unsigned int vel, unsigned int oleo)
{
	cout << "Transmitindo dados...\n";
	rede = empacotar(passo, cor, pos, vel, oleo);
	ajustarCor(7, cor);
	cout << rede;
	resetarCor();
}
unsigned int receber()
{
		// Testa o valor recebido da rede
	unsigned int dado_recebido = rede;
	
	cout << "Recebendo dados...\n";

		// Define a cor dos valores recebidos a mesma da dos carros e pista
	unsigned int valor_cor;
	valor_cor = cor(rede);

		// Exibe os valores de passo, posição, velocidade e condição da pista de cada carro
		// Ajusta e reseta as cores a cada dado recebido
	unsigned int valor_passo;
	valor_passo = passo(rede);
	ajustarCor(valor_cor, 0);
	cout << "Frame ";
	resetarCor();
	ajustarCor(7, valor_cor),
	cout << valor_passo;
	resetarCor();

	unsigned int valor_pos;
	valor_pos = posicao(rede);
	ajustarCor(valor_cor, 0);
	cout << " Pos ";
	resetarCor();
	ajustarCor(7, valor_cor);
	cout << valor_pos;
	resetarCor();

	unsigned int valor_vel;
	valor_vel = velocidade(rede);
	ajustarCor(valor_cor, 0);
	cout << " Vel ";
	resetarCor();
	ajustarCor(7, valor_cor);
	cout << valor_vel;
	resetarCor();

	unsigned int valor_oleo;
	valor_oleo = pista(rede);
	
	ajustarCor(valor_cor, 0);
	cout << " Oil ";
	resetarCor();
	ajustarCor(7, valor_cor);	
	if (valor_oleo == 1) { // Exibe true se tiver óleo na pista, e false caso contrário
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}
	resetarCor();

	return dado_recebido;
}
unsigned int processar(unsigned int dados)
{
		// Decompor os dados recebidos
	unsigned int pos = posicao(dados);
	unsigned int vel = velocidade(dados);
	unsigned int oleo = pista(dados);

		// Calcular a próxima posição
	unsigned int nova_posicao = pos + vel - oleo;

	cout << "Próxima posição: ";
	
	return nova_posicao;
}