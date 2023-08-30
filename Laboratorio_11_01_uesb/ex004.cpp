#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
    int vetorA[10], vetorB[10] , vetorC[10];

    for(int i=0; i < sizeof(vetorA)/4; i++){
        cout << "\nDigite o "  << i+1 << " valor do vetor A: ";
        cin >> vetorA[i];
    }

    for(int i=0; i < sizeof(vetorB)/4; i++){
        cout << "\nDigite o "  << i+1 << " valor do vetor B: ";
        cin >> vetorB[i];
    }

    for(int i = 0, contA = 0, contB = 0; i < sizeof(vetorC)/4; i++, contA++, contB++){
        
        if(vetorA[contA] > vetorB[contB]){
            vetorC[i] = 1;
        }else if(vetorA[contA] == vetorB[contB]){
            vetorC[i] = 0;
        }else if(vetorA[contA] < vetorB[contB]){
            vetorC[i] = -1;
        }
    }
    
    cout << "\nVetor A: " << endl;

    for(int i=0; i < sizeof(vetorA)/4; i++){
        cout << setw(2) << vetorA[i] << " ";
    }

    cout << "\nVetor B: " << endl;

    for(int i=0; i < sizeof(vetorB)/4; i++){
        cout << setw(2) << vetorB[i] << " ";
    }

    cout << "\nVetor C: " << endl;

    for(int i=0; i < sizeof(vetorC)/4; i++){
        cout << setw(2) << vetorC[i] << " ";
    }

    return 0;
}
