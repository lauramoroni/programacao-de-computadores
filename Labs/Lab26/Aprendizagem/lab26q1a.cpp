#include <iostream>
using namespace std;

int cont(const char*);

int main() {
	char string[100];

	cout << "Entre com uma frase: ";
	cin.getline(string, 100);

	cout << "Existem " << cont(string) << " palavras nesta frase\n";
}

int cont(const char* string) {
	int i = 0;
	bool dentro = false;

	while (*string) {
		if (*string == ' ' || *string == '\t' || *string == '\n') {
			dentro = false;
		}
		else if (!dentro) {
			dentro = true;
			i++;
		}
		string++;
	}

	return i;
}