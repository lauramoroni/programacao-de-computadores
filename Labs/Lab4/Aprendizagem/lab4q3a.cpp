#include <iostream>
using namespace std;

// fun��o para calcular a m�dia
float media(float a, float b) {
	return (a + b) / 2;
}
int main(){
	float n1, n2, media_aritmetica;
	
	cout << "Digite um valor inteiro: ";
	cin >> n1;
	cout << "Digite outro valor inteiro: ";
	cin >> n2;
	media_aritmetica = media(n1, n2);
	cout << "A m�dia dos n�meros � " << media_aritmetica;

	return 0;
}