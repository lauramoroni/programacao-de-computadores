#include <iostream>
using namespace std;

enum resultado { Aprovado, Trancado, Reprovado };
union id
{
	char nome[20];
	int matricula;
};
struct aluno
{
	id identidade;
	unsigned cod;
	resultado situacao;
};
void ExibirAluno(aluno*);
int main()
{
	int tam;
	cout << "Digite a quantidade de alunos: ";
	cin >> tam;

	aluno* vet = new aluno[tam];

	cout << "== Dados do primeiro aluno ==\n";
	cout << "Nome: ";
	cin >> vet[0].identidade.nome;
	cout << "Código: ";
	cin >> vet[0].cod;

	int sit;
	cout << "Situação (Aprovado - 0; Trancado - 1; Reprovado - 2): ";
	cin >> sit;
	vet[0].situacao = resultado(sit);

	ExibirAluno(&vet[0]);

	delete[] vet;
	return 0;
}
void ExibirAluno(aluno* ptr) {
	cout << "\nAluno:      " << ptr->identidade.nome << endl;
	cout << "Disciplina: " << ptr->cod << endl;
	cout << "Situacao:   ";

	if (ptr->situacao == Aprovado)
		cout << "Aprovado" << endl;
	else if (ptr->situacao == Trancado)
		cout << "Trancado" << endl;
	else
		cout << "Reprovado" << endl;
}