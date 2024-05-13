#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	int letras = 0;
	char ch;
	cin >> ch;
	while (ch != '!')
	{
		if (isalpha(ch))
			cin >> ch;
		else if (ch == '?')
		{
			letras++;
			cin >> ch;
		}
	}

	return 0;
}
