#include <iostream>
using namespace std;

long long calculo(long long, long long);

int main()
{
	long long resultado = 200530LL * 420800LL;
	cout << "Direto: " << resultado << endl;
	cout << "Fun��o: " << calculo(200530, 420800) << endl;
	return 0;
}
long long calculo(long long a, long long b)
{
	return a * b;
}

/* A multiplica��o direta � diferente da multiplica��o pela fun��o porque na multiplica��o direta os valores atribu�dos ao 
produto eram inteiros, equanto o resultado era long long. J� atrav�s da fun��o, os par�metros j� estavam sendo considerados como long long,
por isso n�o deu o erro que deu ao multiplicar direto. */