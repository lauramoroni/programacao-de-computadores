#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include "estoque.h"
#include "text.h"
using namespace std;


char menu_pedido(vetor_estoque estoque, produto vetor_produto[]) {

	// Exibe o menu dos pedidos
	cout << "Rapizinho\n";

	gerar_linhas('=', 30);
	for (int i = 0; i < estoque.tam; i++) // Percorre cada produto no estoque
	{
		cout << "(" << char(65 + i) << ") " << vetor_produto[i].nome << endl; // Exibe a letra referente a cada número o nome dos produtos
	}
	cout << "(S) Sair\n";
	gerar_linhas('=', 30);

	char opcao = 'a';

	// Lê a opção do usuário
	cout << "Opção [ ]\b\b";
	cin >> opcao;
	opcao = toupper(opcao);

	return opcao;
}

void pedido_atual(produto* vetor_pedido, char valor, int i, struct_pedido* pedido_atual, struct_pedido* p, vetor_estoque estoque) {

	ofstream fout;

	/*fout.open("estoque.bin", ios_base::out | ios_base::binary | ios_base::app);

	if (fout.is_open()) {
		fout.write((char*)&estoque.tam, sizeof(unsigned short));
		fout.write((char*)estoque.produtos, estoque.tam * sizeof(produto));
		fout.close();
	}
	else {
		cout << "Erro ao abrir arquivo de estoque\n";
		exit(EXIT_FAILURE);
	}*/

	system("cls");

	// Parâmetro para relacionar a opção escolhida com o valor do índice do vetor (de acordo com a tabela ASCII)
	// Letra A = vetor[0] 
	int index = valor - 65;


	// Exibe o pedido do usuário
	cout << "Pedido\n";
	gerar_linhas('=', 6);
	cout << vetor_pedido[index].nome << endl;
	cout << fixed; cout.precision(2);
	cout << "R$" << vetor_pedido[index].preco << endl;
	gerar_linhas('=', 6);

	// Pergunta a quantidade do produto para o usuário
	int qtd;
	cout << "Quantidade: [ ]\b\b";
	cin >> qtd; cout << endl;

	// Verifica se tem a quantidade de produtos suficiente no estoque
	if (qtd > vetor_pedido[index].qtd) {
		cout << "Quantidade de " << vetor_pedido[index].nome << " indisponível no estoque\n";
		cout << "Quantidade disponível: " << vetor_pedido[index].qtd << "\n\n";
		return;
	}
	
	vetor_pedido[index].qtd -= qtd; // Diminui a quantidade escolhida pelo usuário da quantidade total do estoque do produto

	pedido_atual[i].produtos = new produto[50]; // Vetor parar armazenar os pedidos
	
	// Atribui os valores escolhidos pelo usuário ao vetor de pedido
	strcpy(pedido_atual[i].produtos->nome, vetor_pedido[index].nome);
	pedido_atual[i].produtos->preco = vetor_pedido[index].preco;
	pedido_atual[i].qtd_pedido += qtd;
	pedido_atual[i].total += vetor_pedido[index].preco * qtd;

	p->total += pedido_atual[i].total;

	exibir_pedido(pedido_atual, i);

	system("pause");
	system("cls");

	exibir_pedido(pedido_atual, i);
}
void exibir_pedido(struct_pedido * pedido_atual, int num_pedidos) {
	cout << "Pedido\n";
	gerar_linhas('=', 30);

	// Exibe todos os produtos pedido pelo usuário até o instante

	for (int i = 0; i <= num_pedidos; i++) {
		cout << pedido_atual[i].qtd_pedido << " X " << pedido_atual[i].produtos->nome << " de R$";
		cout << fixed; cout.precision(2);
		cout << pedido_atual[i].produtos->preco << " = R$" << pedido_atual[i].total << "\n";
	}

	gerar_linhas('=', 30);
}

float desconto(struct_pedido * pedido, char pagamento) {

	// Calcula o desconto

	if (pagamento == 'P') {
		pedido->desconto = pedido->total * 0.1;
		return pedido->desconto;
	}
	else if (pagamento == 'C') {
		pedido->desconto = pedido->total * 0.05;
		return pedido->desconto;
	}
	else {
		cout << "Opção inválida";
		pedido->desconto = 0.0;
		return pedido->desconto;
	}
}

void finalizar_pedido(struct_pedido* p, struct_pedido* pedido, int i, int num_pedido)
{
	if (i != 0) // Condição para finalizar o programa caso nenhum pedido tenha sido feito
	{
		system("cls");

		cout << "\nRapizinho\n";
		gerar_linhas('=', 30);
		exibir_pedido(pedido, i - 1);

		p->frete = 6;
		p->total += p->frete;
		cout << "Taxa de entrega = R$" << p->frete << "\n";

		cout << "Total = R$" << p->total << "\n";

		gerar_linhas('=', 30);

		char res;

		cout << "[P] Pix\n[C] Cartão\n";
		cout << "\nPagamento [ ]\b\b";
		cin >> res;

		res = toupper(res);

		system("cls");

		desconto(p, res);

		system("cls");

		cout << "\nRapizinho\n";
		gerar_linhas('=', 30);
		exibir_pedido(pedido, i - 1);

		cout << "Taxa de entrega = R$" << p->frete << "\n";

		cout << "Desconto = R$" << p->desconto << "\n";

		gerar_linhas('=', 30);

		p->total -= p->desconto;

		cout << "Total = R$" << p->total << "\n";

		cout << "Confirma pedido? (S/N): ";
		char confirmacao;
		cin >> confirmacao;
		confirmacao = toupper(confirmacao);

		// Parâmetros para leitura e escrita dos arquivos
		ifstream fin;
		ofstream fout;

		char recibo[20] = "pedido_";
		recibo[7] = '0' + num_pedido; // Forma de concatenar string com número
		strcat(recibo, ".txt"); // Concat do nome do pedido com o número do pedido

		// Se o usuário confirmar a compra, o recibo é gerado
		if (confirmacao == 'S') {
			fout.open(recibo, ios_base::out);
			if (fout.is_open()) {
				fout.setf(ios_base::fixed, ios_base::floatfield);
				fout.precision(2);
				fout << "Pedido #" << num_pedido << "\n";
				fout << "--------------------------------------------------\n";
				for (int j = 0; j <= i - 1; j++) {
					fout << pedido[j].qtd_pedido << " X " << pedido[j].produtos->nome << " de R$";
					fout << fixed; cout.precision(2);
					fout << pedido[j].produtos->preco << " = R$" << pedido[j].total << "\n";
				}
				fout << "Taxa de entrega = R$" << p->frete << "\n";
				fout << "Desconto = R$" << p->desconto << "\n";
				fout << "--------------------------------------------------\n";
				fout << "Total = R$" << p->total << "\n";
			}
			else {
				cout << "Erro ao abrir arquivo de escrita\n";
				exit(EXIT_FAILURE);
			}

			fout.close();
		}
		else {
			cout << "Cancelando pedido...\n";
		}
	}
	else {
		cout << "Volte sempre!\n";
	}

}
