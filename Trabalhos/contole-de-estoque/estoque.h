#pragma once

struct produto {
	char nome[24];
	unsigned int qtd;
	double preco;
};
struct vetor_estoque {
	produto* produtos;
	produto* pilha_produto;
	unsigned int tam;
};
struct struct_pedido {
	produto* produtos;
	int qtd_pedido;
	float total;
	float desconto;
	float frete;
};

char menu_pedido(vetor_estoque, produto[]);
void pedido_atual(produto*, char, int, struct_pedido*, struct_pedido*, vetor_estoque);
float desconto(struct_pedido*, char);
void exibir_pedido(struct_pedido*, int);
void finalizar_pedido(struct_pedido*, struct_pedido*, int, int);
