#include <iostream>
using namespace std;

struct Horario
{
	int hora, min;
};
void MostrarHorario(Horario*);
int main()
{
	Horario hora;
	Horario* ptr = &hora;

	cout << "Que horas s�o? ";
	cin >> ptr->hora;
	cin.ignore(1);
	cin >> ptr->min;

	//MostrarHorario(ptr);

	cout << "Seu rel�gio est� atrasado, o hor�rio correto � " << ptr->hora + 1 << ":" << ptr->min;

	return 0;
}
void MostrarHorario(Horario* p)
{
	cout << p->hora << ":" << p->min;
}