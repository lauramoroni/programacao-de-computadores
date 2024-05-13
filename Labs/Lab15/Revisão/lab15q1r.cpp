#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Digite o tamanho do vetor: ";
	cin >> num;
	cout << "Criando um vetor para " << num << " inteiros...";
	int* vet = new int [num];
	delete[] vet;

	return 0;
}