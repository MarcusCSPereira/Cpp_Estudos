#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

void bubbleSortMelhor(int tamanho, int vetor2[]);
void bubbleSort(int tamanho ,int vetor1[]);

int main()
{
    srand(time(0));
    
    int tamanho= 500;

    int vetor1[tamanho], vetor2[tamanho];

    
    for(int i = 0; i < tamanho; i++){
        vetor1[i] = rand()%100 + 1;
        vetor2[i] = rand()%100 + 1;
    }
    
    cout << "Vetores fora de ordem: " << endl;
    cout << "\nVetor 1: " << endl;
    for(int i = 0; i< tamanho; i++){
        cout << setw(5) << vetor1[i] << " ";
    }
    
    cout << "\nVetor 2: " << endl;
    for(int i = 0; i< tamanho; i++){
        cout << setw(3) << vetor2[i] << " ";
    }

    
    bubbleSortMelhor(tamanho, vetor2);
    bubbleSort(tamanho, vetor1);

    cout << "\nVetores ordenados:" << endl;
    
    cout << "\nVetor 1: " << endl;
    for(int i = 0; i< tamanho; i++){
        cout << setw(5) << vetor1[i] << " ";
    }
    
    cout << "\nVetor 2: " << endl;
    for(int i = 0; i< tamanho; i++){
        cout << setw(5) << vetor2[i] << " ";
    }

    return 0;
}

void bubbleSortMelhor(int tamanho, int vetor2[]) {
    bool troca;
    int passagem = 0;

    do {
        
        troca = false;

        for (int i = 0; i < tamanho - passagem - 1; i++) {
            
            if (vetor2[i] > vetor2[i + 1]) {
                
                int controle = vetor2[i];
                vetor2[i] = vetor2[i + 1];
                vetor2[i + 1] = controle;
                troca = true;

            }

        }
        
        passagem++;

    } while(troca);
}

void bubbleSort(int tamanho ,int vetor1[]){
    int controle;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int x = 0; x < tamanho - i - 1; x++) {
            if (vetor1[x] > vetor1[x + 1]) {
                controle = vetor1[x];
                vetor1[x] = vetor1[x + 1];
                vetor1[x + 1] = controle;
            }
        }
    }
}
