#include <iostream>
using namespace std;

const int AULAS = 66;

int main()
{
	double notas[4], media, soma = 0;
	int faltas;

	for (int i = 0; i < 3; i++)
	{
		cout << "Nota " << i + 1 << ": ";
		cin >> notas[i];
		soma += notas[i];
	}

	cout << "Faltas: "; cin >> faltas;

	media = soma / 3;

	if (faltas >= 0.75 * AULAS) {
		if (media >= 7)
		{
			cout << "Aprovado direto";
		}
		else if (media < 7) {
			cout << "Recuperação\n";
			cout << "4 prova: ";
			cin >> notas[3];

			media = (notas[3] + media) / 2;
			
			if (media >= 5)
			{
				cout << "Aprovado";
			}
			else {
				cout << "Reprovado";
			}
		}
	}
	else {
		cout << "Reprovado por falta";
	}
}