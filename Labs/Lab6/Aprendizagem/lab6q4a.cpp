#include <iostream>
using namespace std;

long long calculo(long long, long long);

int main()
{
	long long resultado = 200530LL * 420800LL;
	cout << "Direto: " << resultado << endl;
	cout << "Função: " << calculo(200530, 420800) << endl;
	return 0;
}
long long calculo(long long a, long long b)
{
	return a * b;
}

/* A multiplicação direta é diferente da multiplicação pela função porque na multiplicação direta os valores atribuídos ao 
produto eram inteiros, equanto o resultado era long long. Já através da função, os parâmetros já estavam sendo considerados como long long,
por isso não deu o erro que deu ao multiplicar direto. */