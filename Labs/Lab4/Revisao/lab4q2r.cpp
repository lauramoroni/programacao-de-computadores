#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){ 
	int numero;
	srand(time(NULL));
	numero = rand();
	cout << numero << endl;
	if (numero > 16834) {
		cout << "GRANDE";
	}
	else {
		cout << "PEQUENO";
	}

	return 0;
}