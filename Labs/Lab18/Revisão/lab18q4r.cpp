#include <iostream>
using namespace std;

bool StrEqual(string, string);
int main()
{
	char palavra[20] = "colegas";
	if (StrEqual("colega", palavra))
		cout << "Iguais" << endl;
	else
		cout << "Diferentes" << endl;
}
bool StrEqual(string a, string b)
{
	bool val = true;
	if (a == b)
	{
		val;
	}
	else {
		val = false;
	}

	return val;
}