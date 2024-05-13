#include <iostream>
#include <fstream>
using namespace std;

struct registro {
    int menor, maior, pos_m, pos_M;
};

registro info(int*, int);

int main() {
    char nome[20];
    int num;

    cout << "Arquivo: ";
    cin >> nome;

    ifstream fin;
    fin.open(nome);

    if (!fin.is_open()) {
        cout << "Erro ao abrir arquivo\n";
        exit(EXIT_FAILURE);
    }

    int vet[100];

    int i = 0;

    while (fin >> num && i < 100) {
        vet[i] = num;
        i++;
    }

    fin.close();

    registro re = info(vet, i);

    cout << "A posição " << re.pos_m + 1 << " contém o menor número = " << re.menor << endl;
    cout << "A posição " << re.pos_M + 1 << " contém o maior número = " << re.maior << endl;

    return 0;
}

registro info(int* vet, int tam) {
    registro r;
    r.menor = 1000;
    r.maior = 0;

    for (int i = 0; i < tam; i++) {
        if (vet[i] > r.maior) {
            r.maior = vet[i];
            r.pos_M = i;
        }
        if (vet[i] < r.menor) {
            r.menor = vet[i];
            r.pos_m = i;
        }
    }

    return r;
}
