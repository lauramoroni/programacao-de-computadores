#include <iostream>
using namespace std;

union jogador
{
	char nome[25]; // nome do jogador
	int numero; // numero da camisa do jogador
};
struct gol
{
	jogador jog; // identificação do jogador
	int hora, min; // hora e minuto em que o gol foi marcado
};
int main() 
{
	gol ultimosGols[3];

	cout << "Digite os dados dos últimos 3 gols:\n";

    // Lê os gols
    cout << "Gol 1\n";
    cout << "Nome do jogador: ";
    cin >> ultimosGols[0].jog.nome;
    cout << "Hora do gol: ";
    cin >> ultimosGols[0].hora;
    cin.ignore(1);
    cin >> ultimosGols[0].min;

    cout << "Gol 2:\n";
    cout << "Nome do jogador: ";
    cin >> ultimosGols[1].jog.nome;
    cout << "Hora do gol: ";
    cin >> ultimosGols[1].hora;
    cin.ignore(1);
    cin >> ultimosGols[1].min;

    cout << "Gol 3:\n";
    cout << "Nome do jogador: ";
    cin >> ultimosGols[2].jog.nome;
    cout << "Hora do gol: ";
    cin >> ultimosGols[2].hora;
    cin.ignore(1);
    cin >> ultimosGols[2].min;

    // Exibe os gols
    cout << "Gol 1: " << ultimosGols[0].jog.nome << " " << ultimosGols[0].hora << ":" << ultimosGols[0].min << "\n";
    cout << "Gol 2: " << ultimosGols[1].jog.nome << " " << ultimosGols[1].hora << ":" << ultimosGols[1].min << "\n";
    cout << "Gol 3: " << ultimosGols[2].jog.nome << " " << ultimosGols[2].hora << ":" << ultimosGols[2].min << "\n";

    return 0;
}
