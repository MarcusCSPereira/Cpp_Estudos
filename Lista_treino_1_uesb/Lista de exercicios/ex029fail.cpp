#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout.precision(2);
    float x1, folga;
    int latas, litros, litrostot, precotot, precogaloesmin, resto, precol, precog, galoes, galoesmin;
    
    cout << "Digite a area a ser pintada em metros quadrados: " << endl;
    cin >> x1;
    litros = x1 / 6;
    folga = litros * 0.1;
    latas = ceil((litros + folga)/ 18);
    galoes = ceil((litros + folga) / 3.6);
    precol = (latas * 80);
    precog = (galoes * 25);

    cout << "Voce precisa de: " << latas << " latas de tinta" << endl;
    cout << "Isso custara: " << precol << " R$" << endl;

    cout << "Voce precisa de: " << galoes << " galoes de tinta" << endl;
    cout << "Isso custara: " << precog << " R$" << endl;

    litrostot= (litros + folga);  
    resto= litrostot % latas;

    if(resto == (0)){
    cout << "A forma mais barata e so comprar latas sendo assim sao: " << latas << endl;
    cout << "E o preco fica: " << precol << endl;
    }else{
        galoesmin = ceil(resto / 3.6);
        precogaloesmin = galoesmin * 25;
        precotot = precol + precogaloesmin; 
        cout << "Comprando latas e galoes: " << endl;
        cout << "O numero de latas que vc deve comprar e de: " << latas << endl;
        cout << "O numero de galoes que vc deve comprar e de: " << galoesmin << endl;
        cout << "O preco total desse compra e de: " << precotot << endl;
        cout << "Sendo o preco das latas: " << precol << endl;
        cout << "E o preco dos galoes: " << precogaloesmin << endl;
    }





    return 0;
}