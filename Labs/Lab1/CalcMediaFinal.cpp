#include <iostream>
using namespace std;

int main() 
{
	double n1, n2, n3, n4, media, mediaFinal;
	cout << "Calculando a m�dia" << endl;
	cout << "Nota 1: ";
	cin >> n1;
	cout << "Nota 2: ";
	cin >> n2;
	cout << "Nota 3: ";
	cin >> n3;
	media = (n1 + n2 + n3) / 3;
	cout << "A m�dia � " << media << endl;
	//return 0;
	if (media < 7.0)
	{
		cout << "Nota 4: ";
		cin >> n4;
		mediaFinal = (n4 + n3 + n2 + n1) / 4;
		cout << "A m�dia final � " << mediaFinal << endl;
	
	}
}