#include <iostream>
using namespace std;

int main() {
	cout << left; cout.width(8); cout << "Produto";
	cout << right; cout.width(10); cout << "Preço/Kg";
	cout.width(13); cout << "Pedido(Kg) ";
	cout.width(13); cout << "Total Parcial\n";

	cout << left; cout.width(8); cout << "------- ";
	cout << right; cout.width(10); cout << " ---------";
	cout.width(13); cout <<  " ---------- ";
	cout.width(13); cout << " ----------- " << endl;

	cout << left; cout.width(10); cout << "Alface";
	cout << right; cout.width(8); cout << "R$ 1,25/Kg";
	cout.width(8); cout << "3,2Kg";
	cout.width(13); cout << "R$ 4,00\n";

	cout << left; cout.width(10); cout << "Beterraba";
	cout << right; cout.width(8); cout << "R$ 0,65/Kg";
	cout.width(8); cout << "6,0Kg";
	cout.width(13); cout << "R$ 3,90\n";

	cout << left; cout.width(10); cout << "Cenoura";
	cout << right; cout.width(8); cout << "R$ 0,90/Kg";
	cout.width(8); cout << "10,0Kg";
	cout.width(13); cout << "R$ 9,00\n";
}