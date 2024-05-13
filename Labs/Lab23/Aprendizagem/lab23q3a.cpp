#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include "lab23q3a.h"
using namespace std;

int main()
{
	alunos vetor_alunos[100]; // limite alunos

	ifstream fin;
	fin.open("lab23q3a.txt");
	if (!fin.is_open()) {
		cout << "Erro ao abrir o arquivo de entrada\n";
		exit(EXIT_FAILURE);
	}

	char linha[50]; char palavra[20];
	char letra; int num;
	int qtd_alunos = 0;

	// lê palavra por palavra
	while (fin.good()) {
		fin.getline(linha, 50);

		// Lê as informações do aluno diretamente para o vetor de alunos
		fin >> vetor_alunos[qtd_alunos].nome >> vetor_alunos[qtd_alunos].sobrenome;
		fin >> vetor_alunos[qtd_alunos].turno;
		fin >> vetor_alunos[qtd_alunos].turma;

		qtd_alunos++; // Incrementa o contador de alunos
		cout << endl;
	}


	fin.close();
	
	for (int j = 6; j < 9; j++) {

		cout << "Matutino " << j << " Série\n";
		cout << "--------------------\n";
		for (int i = 0; i < qtd_alunos; i++) {
			if (vetor_alunos[i].turno == 'M' && vetor_alunos[i].turma == j) {
				cout << vetor_alunos[i].nome << " " << vetor_alunos[i].sobrenome << " " << vetor_alunos[i].turno << vetor_alunos[i].turma << endl;
			}
		}
		cout << endl;
	}

	cout << endl;

	for (int j = 6; j < 9; j++) {

		cout << "Vespertino " << j << " Série\n";
		cout << "--------------------\n";
		for (int i = 0; i < qtd_alunos; i++) {
			if (vetor_alunos[i].turno == 'T' && vetor_alunos[i].turma == j) {
				cout << vetor_alunos[i].nome << " " << vetor_alunos[i].sobrenome << " " << vetor_alunos[i].turno << vetor_alunos[i].turma << endl;
			}
		}
		cout << endl;
	}

	return 0;
}