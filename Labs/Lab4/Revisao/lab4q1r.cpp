#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	srand(1);
	cout << "Gerando n�meros pseudoaleat�rios: ";
	cout << rand() << " ";
	cout << rand() << " ";
	cout << rand() << " ";
	cout << rand() << " ";
	cout << rand() << endl;

	srand(2);
	cout << "Gerando n�meros pseudoaleat�rios: ";
	cout << rand() << " ";
	cout << rand() << " ";
	cout << rand() << " ";
	cout << rand() << " ";
	cout << rand();

	return 0;
}