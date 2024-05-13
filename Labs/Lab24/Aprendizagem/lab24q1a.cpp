#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	
	if (!fin.is_open()) {
		fout.open("lab24q1a.txt");

		for (int i = 0; i <= 100; i++) {
			fout << i << endl;
		} fout.close();
	}

	fout.open("lab24q1a.bin", ios_base::out | ios_base::binary);
	for (int i = 0; i <= 100; i++) {
		fout << i << endl;
	} fout.close();

	fin.close();

	cout << sizeof("lab24q1a.txt") << endl;
	cout << sizeof("lab24q1a.bin") << endl;
}