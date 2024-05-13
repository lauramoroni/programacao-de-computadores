#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char ch = 'a';

	cout << "Digite seu texto (@ para sair):\n";
	
	while (cin.get(ch) && ch != '@') {

		if (!isdigit(ch)) {
			if (isupper(ch)) {
				ch = tolower(ch);
				cout << ch;
			}
			else if (islower(ch)) {
				ch = toupper(ch);
				cout << ch;
			}
		}
	}



	return 0;
}