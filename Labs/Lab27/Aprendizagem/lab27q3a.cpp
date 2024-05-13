#include <iostream>
using namespace std;

void (*OnClick)(void);
void Mensagem();
void CreateButton(int x, int y, void(*ptr)(void));

void CreateButton(int x, int y, void(*ptr)(void)) {
	cout << "Botão criado na posição " << x << ", " << y << endl;
	OnClick = *ptr;
}
void Mensagem()
{
	cout << "Botão Pressionado!" << endl;
}
int main()
{
	CreateButton(10, 10, Mensagem);
	// simulando pressionamento
	cout << "Pressionar Botão? ";
	char resposta;
	cin >> resposta;
	if (resposta == 'S' || resposta == 's')
		OnClick();
	return 0;
}