#include "pacote.h"
#include <iostream>

unsigned int empacotar(unsigned int passo, unsigned int cor, unsigned int pos, unsigned int vel, unsigned int oleo)
{
	// Desloca os bits para esquerda
	passo = passo << 24; // Para obter os 8 bits mais significativos, desloca 24 (32 - 8) para esquerda
	cor = cor << 16; // Para obter os 8 bits mais significativos, desloca 16 (24 - 8) para esquerda
	pos = pos << 9; // Para obter os 5 bits mais significativos, desloca 9 (16 - 5) para a esquerda
	vel = vel << 5; // Para obter os 4 bits mais significativos, desloca 5 (9 - 4) para a esquerda
	oleo = oleo << 4; // Para obter bit mais significativo, desloca 1 (5 - 1) para a esquerda

	// Empacotando os dados
	unsigned int pacote = passo + cor + pos + vel + oleo;

	return pacote;
}

// Funções para desempacotar os dados
// Para desempacotar os dados, faz o mesmo método da função empacotar(), porém com os bits sendo deslocados para a direita

unsigned char passo(unsigned int pacote)
{
	pacote = pacote >> 24; 

	return pacote;
}
unsigned char cor(unsigned int pacote)
{
	pacote = pacote >> 16 & 0xFF; 

	return pacote;
}
unsigned char posicao(unsigned int pacote)
{
	pacote = pacote >> 9 & 0x7F;

	return pacote;
}
unsigned char velocidade(unsigned int pacote)
{
	pacote = pacote >> 5 & 0xF;

	return pacote;
}
unsigned char pista(unsigned int pacote)
{
	pacote = pacote >> 4 & 0x1;

	return pacote;
}
