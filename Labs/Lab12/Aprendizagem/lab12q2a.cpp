#include <iostream>
#include <string>
using namespace std;

struct palavra
{
	string portugues;
	string ingles;
	string espanhol;
};
void Palavra(palavra dicionario);

/*
int main()
{
	// Inicializando palavras
	palavra dicionario[10] = 
	{
		{"Amor", "Love", "Amor"},
		{"Morte", "Death", "Muerte"}
	};

	// Acrescentando uma palavra
	cout << "Entre com uma palavra:\n";
	cout << "Português: ";
	cin >> dicionario[2].portugues;
	cout << "\nInglês: ";
	cin >> dicionario[2].ingles;
	cout << "\nEspanhol: ";
	cin >> dicionario[2].espanhol;

	// Mostrando todas as palavras do dicionário
	cout << "== Palavra 1 ==\n";
	cout << "Português: " << dicionario[0].portugues << "\n";
	cout << "Inglês: " << dicionario[0].ingles << "\n";
	cout << "Espanhol: " << dicionario[0].espanhol << "\n";

	cout << "== Palavra 2 ==\n";
	cout << "Português: " << dicionario[1].portugues << "\n";
	cout << "Inglês: " << dicionario[1].ingles << "\n";
	cout << "Espanhol: " << dicionario[1].espanhol << "\n";

	cout << "== Palavra 3 ==\n";
	cout << "Português: " << dicionario[2].portugues << "\n";
	cout << "Inglês: " << dicionario[2].ingles << "\n";
	cout << "Espanhol: " << dicionario[2].espanhol << "\n";

	return 0;

}
*/