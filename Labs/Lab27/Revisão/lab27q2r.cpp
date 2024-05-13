#include <iostream>
using namespace std;

 void usuario(int cod, const char* descricao) {
	cout << "A opera��o n�o p�de ser conclu�da!\n\n";
	cout << "Algum problema foi detectado no sistema que impossibilitou a conclus�o da tarefa. Contacte o desenvolvedor do sistema emdev@sys.com e envie o relat�rio de erros abaixo.\n\n";
	cout << "-----------------------------\n";
	cout << "Relat�rio de Erros do Sistema\n";
	cout << "-----------------------------\n";
	cout << "C�digo: S" << cod << endl;
	cout << "Descri��o: " << *descricao;
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
		"erro inesperado na inicializa��o",
		programador);
	return 0;
}