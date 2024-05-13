#include <iostream>
using namespace std;

 void usuario(int cod, const char* descricao) {
	cout << "A operação não pôde ser concluída!\n\n";
	cout << "Algum problema foi detectado no sistema que impossibilitou a conclusão da tarefa. Contacte o desenvolvedor do sistema emdev@sys.com e envie o relatório de erros abaixo.\n\n";
	cout << "-----------------------------\n";
	cout << "Relatório de Erros do Sistema\n";
	cout << "-----------------------------\n";
	cout << "Código: S" << cod << endl;
	cout << "Descrição: " << *descricao;
}
inline void programador(int cod, const char* descricao) { cout << "Erro S" << cod << ": " << *descricao; }

void ExibirErro(int cod, const char* descricao, void (*tipo)(int, const char*)) {
	tipo(cod, descricao);
}

int main()
{
	ExibirErro(1245,
		"falha na leitura do arquivo",
		usuario);
	ExibirErro(4521,
		"erro inesperado na inicialização",
		programador);
	return 0;
}