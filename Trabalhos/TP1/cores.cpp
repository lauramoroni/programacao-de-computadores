#include "cores.h"
#include <iostream>

using namespace std;

// Definições
void ajustarCor(int corTexto, int corFundo)
{
    cout << "\033[1;3" << corTexto << "m\033[1;4" << corFundo << "m";
}

void resetarCor()
{
    cout << COR_DEFAULT;
}
