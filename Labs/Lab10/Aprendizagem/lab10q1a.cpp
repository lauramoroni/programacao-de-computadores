#include <iostream>
using namespace std;

int main() 
{
	int vet[5] = { 10, 20, 30, 40, 50 };
	cout << "Vetor: " << vet[0] << " " << vet[1] << " " << vet[2] << " " << vet[3] << " " << vet[4] << endl;
	cout << "--------------------------------------\n";

	int pos, val;
	cout << "Alterar posição: "; 
	cin >> pos;
	cout << "Novo valor: ";
	cin >> val;

	cout << "--------------------------------------\n";
	vet[pos - 1] = val;
	cout << "Vetor: " << vet[0] << " " << vet[1] << " " << vet[2] << " " << vet[3] << " " << vet[4] << endl;

	return 0;
}