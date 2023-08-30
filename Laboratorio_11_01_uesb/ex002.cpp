#include <iostream>

using namespace std;

int main()
{
    
    int vetor1[50], vetor2[50];
    int controle=0;

    for(int i=0; i < sizeof(vetor1)/4; i++){
        cout << "\nDigite o "  << i+1 << " valor: ";
        cin >> vetor1[i];
    }

    for(int i=0; i < sizeof(vetor1)/4; i++ , controle++){
        vetor2[controle] = vetor1[i];
    }
    
    cout << endl;
    
    for(int i=0; i < 100 ; i++){
        
        if(i <50){
            cout << vetor1[i] << " ";
        }
        if(i == 50){
            cout << "\nVetor 2: " << endl;
        }
        if(i >=50){
            cout << vetor2[i-50] << " "; 
        }
    }


    return 0;
}
