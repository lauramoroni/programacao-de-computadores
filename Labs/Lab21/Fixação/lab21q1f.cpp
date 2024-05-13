#include <iostream>
using namespace std;

struct contribuintes {
	char nome[40];
	float valor;
};

int main()
{
	cout << "Digite o número de contribuinte: ";
	int num;
	cin >> num;

	contribuintes* vet = new contribuintes[num];

	for (int i = 0; i < num; i++)
	{
		cout << "#" << i + 1 << "\n";
		cout << "Nome: ";
		cin.get(); cin.getline((vet + i)->nome, 40);
		cout << "Valor: ";
		cin >> (vet + i)->valor;
	}

	cout << "Grandes patronos\n";

	for (int i = 0; i < num; i++)
	{

		if ((vet + i)->valor >= 10000) {
			cout << (vet + i)->nome; cout << " ";
			cout << (vet + i)->valor; cout << "\n";
		}
	}

	cout << "\nPatronos\n";

	for (int i = 0; i < num; i++)
	{
		if ((vet+i)->valor < 10000){
			cout << (vet + i)->nome; cout << " ";
			cout << (vet + i)->valor; cout << "\n";
		}
	}
		

}
