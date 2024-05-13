#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	if (argc != 4) {
		cout << "Informe três argumentos." << endl;	
	}
	else {
		cout << "Estou aprendendo " << argv[1] << " e " << argv[3];
	}
	return 0;
}