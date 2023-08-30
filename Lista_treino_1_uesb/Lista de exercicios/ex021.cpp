#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cin.precision(2);
    cout.precision(2);
    
    float x1, x2, x3;
    cout << "Digite o preco do primeiro produto:  " << endl;
    cin >> x1;
    cout << "Digite o preco do segundo produto:  " << endl;
    cin >> x2;
    cout << "Digite o preco do terceiro produto: " << endl;
    cin >> x3;
    cout << "\n\n" << endl;

    if(x1 < x2 and x1 < x3){
        cout << "Voce deve comprar o primeiro produto, pois ele custa: R$ " << x1 << endl;
    }else if(x2 < x1 and x2 < x3){
        cout << "Voce deve comprar o segundo produto, pois ele custa: R$ " << x2 << endl;
    }else{
        cout << "Voce deve comprar o terceiro produto, pois ele custa: R$ " << x3 << endl;
    }
    return 0;
}