#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int x;
    cout << "digite um numero entre 0 e 10: " << endl;
    cin >> x;

    while(x < 1 or x > 10){
        cout << "Valor invalido digite novamente: (entre 0 e 1) " << endl;
        cin >> x;
    }
        cout << "Valor valido" << endl;
    return 0;
}
