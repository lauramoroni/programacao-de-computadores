#include <iostream>
using namespace std;

int main()
{
	int palpite;
	srand(time(NULL));
	int numero = rand() % 10 + 1;

	cout << "Adivinhe o n�mero: ";

	do {
		cin >> palpite;
		if (palpite < numero) {
			cout << "O n�mero secreto � maior que " << palpite << ". Tente novamente!\n";
		}
		else if (palpite > numero) {
			cout << "O n�mero secreto � menor que " << palpite << ". Tente novamente!\n";
		}
	} while (palpite != numero);
	
	cout << "Acertou!";

}


