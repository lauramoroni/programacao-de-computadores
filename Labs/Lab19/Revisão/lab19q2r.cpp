#include <iostream>
using namespace std;

//void calcularTransposta(int[3][2], int[2][3]);
int main()
{
	int matriz[3][2];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> matriz[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "|" << matriz[i][j] << "|";
		}
		cout << endl;
	}


}

