#include <iostream>
using namespace std;

int bitsAltos(unsigned int);

int main()
{
    unsigned int numero;
    cout << "Digite um valor inteiro: ";
    cin >> numero;

    cout << "Os 16 bits mais baixos desse valor correspondem ao número " << bitsAltos(numero);

    return 0;
}

int bitsAltos(unsigned int numero)
{
    unsigned int mascara = 0xFFFF0000;

    return numero & mascara;
}
