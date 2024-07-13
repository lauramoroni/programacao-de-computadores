#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include "estoque.h"
#include "text.h"
using namespace std;


char painel_controle(vetor_estoque estoque, produto * vetor_produto)
{
	cout << "Painel de Controle\n";
	cout << "====================\n";
	cout << "(A)dicionar\n";
	cout << "(E)xcluir\n";
	cout << "(L)istar\n";
	cout << "(S)air\n";
	cout << "====================\n";
	cout << "Opção [ ]\b\b";

	char res;
	cin >> res; 
	res = toupper(res);

	return res;
}

void adicionar(produto* vetor_produto, vetor_estoque* estoque) {
	cout << "\nAdicionar\n";
	gerar_linhas('=', 6);
	cout << "Produto: ";
	char nome[20];
	cin.ignore(); 
	cin.getline(nome, 20);

	// Verificar se o produto já existe no estoque
	int indice_produto = -1;
	for (int i = 0; i < estoque->tam; i++) {
		if (nome == vetor_produto[i].nome) {
			indice_produto = i;
		}
	}

	if (indice_produto != -1) { // Produto já existe, atualizar preço e quantidade
		cout << "Preço: ";
		double preco;
		cin >> preco;

		cout << "Quantidade: ";
		int quantidade;
		cin >> quantidade;

		vetor_produto[indice_produto].preco = preco;
		vetor_produto[indice_produto].qtd += quantidade;
		cout << "Produto atualizado com sucesso!\n";
	}
	else { // Produto não existe, adicionar novo produto
		cout << "Preço: ";
		double preco;
		cin >> preco;

		cout << "Quantidade: ";
		int quantidade;
		cin >> quantidade;
		
		estoque->tam++;

		strcpy(vetor_produto[estoque->tam - 1].nome, nome);
		vetor_produto[estoque->tam - 1].preco = preco;
		vetor_produto[estoque->tam - 1].qtd = quantidade;

		cout << "\n\nNovo produto adicionado com sucesso!\n";
	}

	system("pause");
	system("cls");
}

void listar(produto* vetor_produto, vetor_estoque estoque) {
	cout << "\nListagem\n";
	gerar_linhas('=', 15);

	for (int i = 0; i < estoque.tam; i++) {
		cout << vetor_produto[i].nome << " - ";
		cout << vetor_produto[i].preco << " - ";
		cout << vetor_produto[i].qtd << "\n\n";
	}

	system("pause");
	system("cls");
}

void excluir(produto* vetor_produto, vetor_estoque* estoque) {
	cout << "Excluir\n";
	gerar_linhas('-', 6);

	for (int i = 0; i < estoque->tam; i++) {
		cout << i + 1 << ") " << vetor_produto[i].nome << "\n";
	}

	cout << "Produto: [ ]\b\b";
	int opcao;
	cin >> opcao;
	opcao--; // Ajuste do índice

	if (opcao >= 0 && opcao < estoque->tam) { // Verifica se a opção é válida

		cout << "Deseja excluir '" << vetor_produto[opcao].nome << "' (S/N)? ";
		char res;
		cin >> res;
		res = toupper(res);

		if (res == 'S') {
			// Remoção do produto do vetor de produtos
			for (int i = opcao; i < estoque->tam - 1; i++) {
				vetor_produto[i] = vetor_produto[i + 1];
			}
			estoque->tam--; // Diminui o tamanho do estoque
			cout << "\nProduto excluído com sucesso!\n";
		}
		else {
			cout << "\nApagamento do produto cancelado.\n";
		}
	}
	else {
		cout << "Opção inválida!\n";
	}

	system("pause");
	system("cls");
}

