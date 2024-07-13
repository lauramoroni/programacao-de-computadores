#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cstdio>
#include "cores.h"
#include "pacote.h"
#include "rede.h"

using namespace std;

// Protótipos
void espacos(int);
void desenhar(int, int);

int main()
{
    srand(unsigned(time(NULL)));

        // Inicializa os dados
    int passo = 0;
    int posA = 0, posB = 0;
    int velA, velB;
    int corA, corB;
        // Gera as cores dos carros de forma aleatória
    corA = rand() % 6 + 1;
    corB = rand() % 6 + 1;
        // Evita que os carros tenha cores iguais; se isso acontecer, eles terão cores predefinidas
    if (corA == corB) {
        corA = 5;
        corB = 6;
    }
    int pistaA, pistaB;
    do
    {
            // Limpa tela
        system("cls");

            // Desenha os caminhões
        desenhar(posA, corA); // A cor permanece uma só a cada loop pois a variável dela está fora
        desenhar(posB, corB);
        
            // Atualiza velocidade (garantindo a deslocação entre 0 e 10 caracteres)
        velA = rand() % 10 + 1;
        velB = rand() % 10 + 1;

            // Atualiza estado da pista (0 ou 1)
        pistaA = rand() % 2;
        pistaB = rand() % 2;

            // Transmite, recebe e processa os dados, incluindo qual será a nova posição do caminhão
        transmitir(passo, corA, posA, velA, pistaA);
        cout << "\n";
        posA = processar(receber());
        cout << posA;
        cout << "\n\n";
        
        transmitir(passo, corB, posB, velB, pistaB);
        posB = processar(receber());
        cout << posB;
        cout << "\n";


            // Aguarda pressionamento de tecla
        system("pause");

        passo += 1;
    } while (posA <= 100 && posB <= 100);
    
        // Limpa tela
    system("cls");

        // Desenha caminhões em seu estado final
    desenhar(posA, corA);
    desenhar(posB, corB);

        // Exibe resultados (quantidade de passos e velocidade média de cada carro)
    ajustarCor(0, 7);
    cout << "Passos:";
    resetarCor();
    cout.width(3);  cout << passo;
    cout << "\n\n";

        // Calcula a velocidade média dos carros
    float vel_mediaA, vel_mediaB;
    vel_mediaA = posA / passo;
    vel_mediaB = posB / passo;

        // Ajuste das cores de texto e de fundo
    ajustarCor(7, corA);
    cout << "Posição:";
    resetarCor();
    ajustarCor(corA, 0);
    cout << " "; cout << posA;
    resetarCor();
    cout << "\t";

    ajustarCor(7, corA);
    cout << " Velocidade média:";
    resetarCor();
    ajustarCor(corA, 0);
    cout << " "; 
    cout << fixed; cout.precision(2); // Define duas casas decimais para velocidade média
    cout << vel_mediaA;
    cout << "\n";
    resetarCor();

    cout << "\n";

    ajustarCor(7, corB);
    cout << "Posição:";
    resetarCor();
    ajustarCor(corB, 0);
    cout << " "; cout << posB;
    resetarCor();
    cout << "\t";

    ajustarCor(7, corB);
    cout << " Velocidade média:";
    resetarCor();
    ajustarCor(corB, 0);
    cout << " "; 
    cout << fixed; cout.precision(2); // Define duas casas decimais para velocidade média
    cout << vel_mediaB;
    resetarCor();

}
void desenhar(int pos, int cor)
{
    ajustarCor(cor, 0);
        // Caracteres gráficos para representação do carro
    cout << "\n\n";
    espacos(pos);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDC\xDC\n");
    espacos(pos);
    printf("\xDFO\xDF\xDF\xDF\xDFO\xDF\n");

        // Pista com cem caracteres
    cout << "----------------------------------------------------------------------------------------------------|----------\n";
    cout << "                                                                                                   100           ";
    cout << "\n";
    
    resetarCor();
}
void espacos(int qtd) {
    while (qtd-- > 0) cout << ' ';
}

