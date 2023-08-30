#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    double i ,valor ,troco ,din ,soma = 0;

    cout.precision(2);
    system("cls");
    cout << "Digite o valor dos seus produtos, quando acabar, coloque o valor 0 em um produto para prosseguir.\n" << endl; 

    for(i = 1; i > 0; i++){
        cout << "Qual o valor do produto " << i << " : ";
        cin >> valor;
        soma = soma + valor;
        if(valor == 0){
            break;
        }
    }

    cout <<"\nO valor total dos " << i;
    cout << fixed << " produtos e: R$ " << soma << endl;
    
    dinheirocli:
    cout << fixed << "\nDinheiro: R$ ";
    cin >> din;
   
    if(din < soma){
        cout << "\nVoce nao possui o valor adequado para pagar essa compra, esta faltando: R$ " << (soma - din) << " para completar os: R$ " << soma << " ,coloque outro valor"<< endl;
        goto dinheirocli;
    }
    
    troco = din - soma;
    
    cout << "\nVoce pagou a conta com: R$ " << din << endl;
    cout << fixed << "Troco: R$ " << troco << endl;
    cout << "\nObrigado pela compra" << endl;

    return 0;
}
