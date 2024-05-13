#include <iostream>
#include <cmath>
using namespace std;

// fun��o para calcular a dist�ncia
float calcDistancia(int x1, int x2, int y1, int y2) {

	return sqrt(pow((y1 - x1), 2) + pow((y2 - x2), 2));
}
int main() {
	int px, py, qx, qy;
	float distancia;

	cout << "Ponto P(x,y): ";
	cin >> px >> py;
	cout << "Ponto Q(x,y): ";
	cin >> qx >> qy;
	cout << "\n";
	
	distancia = calcDistancia(px, py, qx, qy);
	cout << "A dist�ncia entre os pontos P e Q � " << distancia; 

	return 0;
}