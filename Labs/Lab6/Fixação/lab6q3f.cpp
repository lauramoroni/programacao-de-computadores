#include <iostream>
#include <random>
using namespace std;

int main()
{
	int variavel_int;
	short variavel_short;
	long variavel_long;
	long long variavel_llong;

	variavel_int = rand();
	variavel_short = rand();
	variavel_long = rand();
	variavel_llong = rand();
	
	cout << "short: " << sizeof variavel_short << " bytes." << endl;
	cout << "int: " << sizeof variavel_int << " bytes." << endl;
	cout << "long: " << sizeof variavel_long << " bytes." << endl;
	cout << "long long: " << sizeof variavel_llong << " bytes." << endl;
	cout << "total: " << sizeof variavel_int + sizeof variavel_short + sizeof variavel_long + sizeof variavel_llong << " bytes.\n" << endl;

}