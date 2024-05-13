#include <iostream>
using namespace std;

void exibirVetor(int[]);
int main()
{
	int vet[5] = { 15, 29, 48, 10, 35 };

	exibirVetor(vet);

	return 0; 

}
void exibirVetor(int vet[])
{
	for (int i = 0; i < 5; i++) {
		cout << vet[i] << " ";
	}
}