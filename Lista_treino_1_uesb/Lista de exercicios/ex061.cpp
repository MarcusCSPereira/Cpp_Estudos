#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int num;
    double valor ,soma = 0;

    cout.precision(2);
    inicio:
    cout << "O cliente esta levando quantos paes: ";
    cin >> num;
    cout << "Qual o valor do pao que o cliente esta levando: ";
    cin >> valor; 
    if(num > 50){
        cout << "\nVoce esta levando paes demais, voce pode levar ate 50 paes.\n" << endl;
        goto inicio;
    }
    for(int i = 1; i <= num; i++){
        soma = soma + valor;
    }
    
    cout << fixed << "O valor total da compra de " << num << " paes foi: R$ " << soma;
    return 0;
}
