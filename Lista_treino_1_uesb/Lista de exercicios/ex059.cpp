#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int num;
    double media, valor, soma = 0;

    cout.precision(2);
    
    cout << "Voce tem quantos CDs: ";
    cin >> num;
    for(int i = 1; i <= num; i++){
        cout << "Digite o valor gasto no CD: " << i << ": ";
        cin >> valor;
        soma = valor + soma;
    }
    
    media = soma / num;
    
    cout << fixed << "O valor total gasto nessa colecao foi de: R$ " << soma << endl;
    cout << fixed << "A media de dinheiro gasto em cada CD foi: R$ " << media << endl;
    return 0;
}
