#include <iostream>

using namespace std;

int main()
{
    
    int vetor[20];
    int cont = 0;

    for(int i=0; i < sizeof(vetor)/4; i++){
        cout << "\nDigite o "  << i+1 << " valor: ";
        cin >> vetor[i];
        if(vetor[i]%2 == 1){
            cont++;
        }
    }

    for(int i=0; i < sizeof(vetor)/4; i++){
        cout<< vetor[i] << " ";
    }
    
    cout << endl;
    
    if(cont>0){
        cout << "Existem " << cont << " numeros impares nesse vetor";
    }else{
        cout << "Todos os numeros digitados sao pares";
    }

    return 0;
}
