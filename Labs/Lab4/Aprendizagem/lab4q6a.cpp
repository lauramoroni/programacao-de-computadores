#include <iostream>
#include <cstdlib>
using namespace std;

void ligar();
void verificar();
void ativar();
int inicializar();

int main() {
	int resultado = inicializar();

	if (resultado > 16384) {
		cout << "Sistema em funcionamento";
	}
	else {
		cout << "Falha na inicialização";
	}

	return 0;
}
int inicializar(){
	cout << "Inicializando sistema:\n";

	ligar();
	verificar();
	ativar();

	cout << "Inicialização concluída.\n";

	return rand();
}
void ligar() {
	cout << "- Ligando dispositivos\n";
}
void verificar() {
	cout << "- Verificando integridade\n";
}
void ativar() {
	cout << "- Ativando processos\n";
}

