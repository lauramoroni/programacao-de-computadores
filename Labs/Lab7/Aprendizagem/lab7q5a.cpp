#include <iostream>
using namespace std;

void exibirBits(unsigned char);
bool testarBit(unsigned char, int);

int main()
{
    unsigned char numero;
    cout << "Digite um valor unsigned char: ";
    cin >> numero;

    exibirBits(numero);

    return 0;
}

bool testarBit(unsigned char flag, int bit)
{
    return (flag & (1 << bit)) != 0;
}

void exibirBits(unsigned char valor)
{
    int numBits = 8;

    cout << "A representação binária de é: ";

    for (int i = numBits - 1; i >= 0; --i)
    {
        if (testarBit(valor, i))
            cout << '1';
        else
            cout << '0';
    }

    cout << endl;
}
