#include <iostream>
using namespace std;

int main()
{
	int numAlunos;
	cout << "Digite o n�mero de alunos (m�n 2): ";
	cin >> numAlunos;

	float* vet = new float[numAlunos];
	cout << "Digite a nota de dois alunos: ";
	cin >> vet[0] >> vet[1];

	cout << "As notas digitadas foram: " << vet[0] << " e " << vet[1];

	delete[] vet;
	return 0;
}