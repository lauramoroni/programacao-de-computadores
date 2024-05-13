#include <iostream>
using namespace std;

struct jogador
{
	char nome[20];
	float salario;
	unsigned gols;
};
void exibirVetor(jogador*);
int main()
{
	jogador* vet = new jogador;



	delete vet;
	return 0;

}
void exibirVetor(jogador* vet)
{

}