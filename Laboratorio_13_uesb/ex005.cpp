#include <iostream>

using namespace std;

int buscaBinaria(int vetor[], int size, int chave);
void bubbleSortMelhor(int tamanho, int vetor[]);

int main() {
    
    int size, chave, result;


    cout << "Digite o tamanho do vetor: ";
    cin >> size;

    int vetor[size];

    for(int i = 0; i< size; i++){
        cout << "Digite um numero para o vetor: ";
        cin >> vetor[i];
    }

    bubbleSortMelhor(size,vetor);

    cout<< "Vetor ordenado: ";

    for(int i = 0; i< size; i++){
        cout << vetor[i] << " ";
    }

    cout << "\nDigite a chave que deseja buscar nesse vetor e eu te direi a primeira posicao do vetor em que ela se encontra: ";
    cin >> chave;

    result = buscaBinaria(vetor, size, chave);

    if (result != -1) {
        cout << "Chave encontrada na posicao " << result << endl;
    } else {
        cout << "Chave nao encontrada" << endl;
    }

    return 0;
}

void bubbleSortMelhor(int tamanho, int vetor[]) {
    bool troca;
    int passagem = 0;

    do {
        troca = false;

        for (int i = 0; i < tamanho - passagem - 1; i++) {
            if (vetor[i] > vetor[i + 1]) {
                int controle = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = controle;
                troca = true;
            }
        }
        passagem++;

    } while(troca);
}

int buscaBinaria(int vetor[], int size, int chave) {
    int esq = 0;
    int dir = size - 1;
    int meio;

    while (esq <= dir) {
        meio = esq + (dir - esq) / 2;

        if (vetor[meio] == chave) {
            return meio;
        }

        if (vetor[meio] < chave) {
            esq = meio + 1;
        } else {
            dir = meio - 1;
        }
    }

    return -1;
}
