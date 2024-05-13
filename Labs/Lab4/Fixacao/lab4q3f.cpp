#include <iostream>
using namespace std;
 

void Dois() {
	cout << "Dois ";
}
void UmTres() {
	cout << "Um ";
	Dois();
	cout << "Três ";
}
int main(){
	cout << "Começando agora:\n";
	UmTres();
	cout << "Pronto!\n";

	return 0;
}
