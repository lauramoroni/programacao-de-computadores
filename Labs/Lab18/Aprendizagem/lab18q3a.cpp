#include <iostream>

using namespace std;

int main() {
    char texto[200] = "";
    char caractere;
    int i = 0;

    cout << "Digite um texto:" << endl;

    // L� os caracteres at� que o caractere '@' seja encontrado
    while (cin.get(caractere) && caractere != '@') {
        texto[i] += caractere;
        i += 1;
    }

    // Mostra o texto recebido
    cout << "Texto recebido: " << texto << endl;

    return 0;
}
