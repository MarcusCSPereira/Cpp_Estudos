#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout.precision(2);
    float x1, litros; 
    int latas, preco;
    
    cout << "Digite a area a ser pintada em metros quadrados: " << endl;
    cin >> x1;
    litros = x1 / 3;
    latas = ceil(litros / 18);
    preco = (latas * 80);


    if (latas == 0) {
        cout << "Voce precisa de: 1 lata de tinta apenas" << endl;
        cout << "Isso custara: 80 R$" << endl;
    }else{
        cout << "Voce precisa de: " << latas << " latas de tinta" << endl;
        cout << "Isso custara: " << preco << " R$" << endl;
    }


    return 0;
}