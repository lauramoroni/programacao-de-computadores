#include <iostream>
using namespace std;

float tempoDaVolta(float t);

int main()
{
	float volta;

	do {
		cout << "Volta: ";
		cin >> volta;
		float total = tempoDaVolta(volta);
		cout << "Tempo total: " << total << "\n";

	} while (volta);

	return 0;
}

float tempoDaVolta(float t) {
	static float totalAcumulado = 0;
	totalAcumulado += t;

	return totalAcumulado;
}