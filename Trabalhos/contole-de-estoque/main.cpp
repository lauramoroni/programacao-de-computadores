#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include "estoque.h"
#include "text.h"
#include "controle.h"
using namespace std;

int main(int argc, char *argv[])
{
	ofstream fout;
	ifstream fin;

	vetor_estoque estoque;
	estoque = { 0, 0 }; // Inicialização do registro
	
	/*fin.open("estoque.bin", ios_base::in | ios_base::binary);

	if (fin.is_open()) { // Se o arquivo de estoque já existe

		fin.read((char*)&estoque.tam, sizeof(unsigned short));

		estoque.produtos = new produto[estoque.tam]{};

		fin.read((char*)estoque.produtos, estoque.tam * sizeof(produto));

		fin.close();
	}
	else { // Criando um arquivo de estoque caso ele não exista
		
		fout.open("estoque.bin", ios_base::out | ios_base::binary | ios_base::app);
		*/
		estoque.tam = 4; // Definindo um valor para começar o programa com base na quantidade de produtos iniciais
	/*
		fin.close();
	} fout.close();
	*/

	produto* vetor_produto = new produto[estoque.tam];
	vetor_produto[0] = { "Pastel", 20, 5.5 };
	vetor_produto[1] = { "Bolo", 10, 4.3 };
	vetor_produto[2] = { "Pizza", 10, 15.7 };
	vetor_produto[3] = { "Suco", 30, 1.5 };
	
	// Inicializa o pedido com tudo zerado 
	// Vetor estático de pedido
	struct_pedido pedido[50] = { 0 };

	char opcao = 'a'; // opção do usuário no sistema de vendas
	int i = 0; 
	int num_pedido = 0;

	// Pedido final
	struct_pedido p = { 0 };

	if (argc > 1 && strcmp(argv[1], "-c") == 0) {
		char res = 'a'; // opção do usuário no sistema de controle

		do {

			res = painel_controle(estoque, vetor_produto);

			switch (res) {
			case 'A':
				adicionar(vetor_produto, &estoque);
				break;
			case 'E':
				excluir(vetor_produto, &estoque);
				break;
			case 'L':
				listar(vetor_produto, estoque);
				break;
			case 'S':
				cout << "Volte sempre!\n"; // Tem que finlizar o pedido aqui
				break;
			default:
				cout << "Opção inválida\n";
			}

		} while (res != 'S');
	}
	else {
		do {

			opcao = menu_pedido(estoque, vetor_produto);

			switch (opcao) {
			case 'A':

			case 'B':

			case 'C':

			case 'D':
				cout << endl;
				pedido_atual(vetor_produto, opcao, i, pedido, &p, estoque);
				break;
			case 'S':
				cout << endl;
				num_pedido++;	
				finalizar_pedido(&p, pedido, i, num_pedido); // Tem que finlizar o pedido aqui
				break;
			default:
				cout << "Opção inválida\n";
			}
			i++;

		} while (opcao != 'S');

		cout << endl;

	}

	delete[] vetor_produto;
	delete[] estoque.produtos;

	return 0;
}
