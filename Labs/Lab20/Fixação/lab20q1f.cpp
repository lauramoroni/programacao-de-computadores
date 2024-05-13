#include <iostream>
using namespace std;

int main()
{
	int palpite;
	srand(time(NULL));
	int numero = rand() % 10 + 1;

	cout << "Adivinhe o número: ";

	do {
		cin >> palpite;
		if (palpite < numero) {
			cout << "O número secreto é maior que " << palpite << ". Tente novamente!\n";
		}
		else if (palpite > numero) {
			cout << "O número secreto é menor que " << palpite << ". Tente novamente!\n";
		}
	} while (palpite != numero);
	
	cout << "Acertou!";

}


