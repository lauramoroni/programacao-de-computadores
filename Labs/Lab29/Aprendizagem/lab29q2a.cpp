#include <iostream>
using namespace std;

void print(const int&);
void print(const double&);
void print(const char*);

int main()
{
	cout << "Inteiro: ";
	print(45);
	cout << "\nPonto-flutuante: ";
	print(3.9);
	cout << "\nString: ";
	print("Oi Mundo");
	cout << "\n";

}

void print(const int& i) {
	cout << "\033[3;59;35m" << i << "\033[0m\t\t";
}
void print(const double& d) {
	cout << "\033[3;180;45m" << d << "\033[0m\t\t";
}
void print(const char* ch) {
	cout << "\033[3;252;25m" << ch << "\033[0m\t\t";
}
