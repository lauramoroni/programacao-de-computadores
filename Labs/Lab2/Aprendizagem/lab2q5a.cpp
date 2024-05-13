#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	// verifica se foi fornecido dois argumentos
	if (argc != 2) {
		cout << "Informe dois argumentos." << endl;
	}

	// abre o aplicativo através do comando system
	string comando = string("start ") + argv[1];
	system(comando.c_str());

	return 0;
}