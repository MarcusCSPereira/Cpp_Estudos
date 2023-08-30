#include <iostream>

using namespace std;

int main() {
    int num, valor, soma = 0;
    double media;

    cout.precision(2);
    
    cout << "Voce quer a media de quantos valores: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        cout << "Digite o " << i << " valor: ";
        cin >> valor;
        soma = valor + soma;
    }
    
    media = soma / num;
    cout << fixed << "\nA media dos " << num << " valores e: " << media ;
    
    return 0;
}
