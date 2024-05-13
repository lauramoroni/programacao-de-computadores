#include <iostream>
using namespace std;

void (*OnClick)(void);
void Mensagem();
void CreateButton(int x, int y, void(*ptr)(void));

void CreateButton(int x, int y, void(*ptr)(void)) {
	cout << "Bot�o criado na posi��o " << x << ", " << y << endl;
	OnClick = *ptr;
}
void Mensagem()
{
	cout << "Bot�o Pressionado!" << endl;
}
int main()
{
	CreateButton(10, 10, Mensagem);
	// simulando pressionamento
	cout << "Pressionar Bot�o? ";
	char resposta;
	cin >> resposta;
	if (resposta == 'S' || resposta == 's')
		OnClick();
	return 0;
}