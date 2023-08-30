#include <iostream>

using namespace std;

void bublleSort(int vetor[10]);

int main()
{
    
    int vetor[10];

    
    for(int i = 0; i< 10; i++){
        cout << "Digite um numero para o vetor: ";
        cin >> vetor[i];
    }
    cout << "Vetor fora de ordem: " << endl;

    for(int i = 0; i< 10; i++){
        cout << vetor[i] << " ";
    }

    bublleSort(vetor);

    cout << "\nVetor ordenado:" << endl;
    
    for(int i = 0; i< 10; i++){
        cout << vetor[i] << " ";
    }


    return 0;
}

void bublleSort(int vetor[10]){
    int controle;
    for (int i = 0; i < 10 - 1; i++) {
        for (int x = 0; x < 10 - i - 1; x++) {
            if (vetor[x] > vetor[x + 1]) {
                controle = vetor[x];
                vetor[x] = vetor[x + 1];
                vetor[x + 1] = controle;
            }
        }
    }
}
