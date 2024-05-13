#include <iostream>
using namespace std;

inline int max(int a, int b) { if (a > b) { return a; } else if (b > a) { return b; } else { return 0; }; }

inline int min(int a, int b) { if (a < b) { return a; } else if (b < a) { return b; } else { return 0; }; }

inline float abso(float a) { if (a < 0) { return -a; } else { return a; } }

inline char maiusc(char ch) { return toupper(ch); }

int main()
{
	int A = 2, B = 6, C = 12, D = 0;
	float E = 3.5, F = -1.2;
	char ch = 'm';

	cout << max(A, B) << endl;
	cout << min(C, D) << endl;
	cout << abso(E) << " " << abso(F) << endl;
	cout << maiusc(ch);
}