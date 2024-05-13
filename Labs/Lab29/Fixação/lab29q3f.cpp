#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;


struct String
{
	char* str; // ponteiro para a string
	int comp; // comprimento da string (sem contar '\0')
};

// prot�tipos para ajustar(), mostrar() e mostrar()
void ajustar(String&, char[]);
void mostrar(const char*, int n = 1);
void mostrar(const String&, int n = 1);

int main()
{
	String msg;
	char teste[] = "Realidade de ponteiros e strings\n";
	ajustar(msg, teste); // primeiro argumento � uma refer�ncia
	// aloca espa�o para guardar c�pia de teste
	// ajusta o membro str de msg para apontar 
	// para novo bloco, copia teste para o novo 
	// bloco e ajusta o membro comp
	mostrar(msg); // mostra o membro String uma vez
	mostrar(msg, 2); // mostra o membro String duas vezes
	teste[0] = 'D';
	teste[1] = 'u';
	mostrar(teste); // mostra a string uma vez
	mostrar(teste, 3); // mostra a string tr�s vezes
	mostrar("Pronto!");
	delete[] msg.str;
	return 0;
}

void ajustar(String& str, char vet[]) {
	str.comp = strlen(vet);
	str.str = new char[str.comp + 1];
	strcpy(str.str, vet);
}
void mostrar(const char* str, int n) {
	for (int i = 0; i < n; i++) {
		cout << str;
	}
}
void mostrar(const String& str, int n) {
	for (int i = 0; i < n; i++) {
		cout << str.str;
	}
}