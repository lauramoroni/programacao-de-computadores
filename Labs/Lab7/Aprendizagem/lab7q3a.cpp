#include <iostream>
using namespace std;

int bitsBaixos(unsigned int);

int main()
{
    unsigned int numero;
    cout << "Digite um valor inteiro: ";
    cin >> numero;

    cout << "Os 16 bits mais baixos desse valor correspondem ao n�mero " << bitsBaixos(numero);

    return 0;
}

int bitsBaixos(unsigned int numero)
{
    unsigned int mascara = 0xFFFF;

    return numero & mascara;
}
