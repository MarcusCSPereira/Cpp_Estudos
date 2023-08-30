#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout.precision(2);
    float x1, excesso, multa;
    const float limite = 50;
    
    cout << "Digite a quantidade de KG que sua pescaria rendeu:  ";
    cin >> x1;

    
    if(x1 > limite){
        excesso = x1 - limite;
        multa = excesso * 4;
        
        cout << "Voce excedeu em " << excesso << "KG" << endl;
        cout << "Entao tera que pagar uma multa de valor: " << multa << " R$" << endl;
        
    }else{
        cout << "Voce no excedeu o excesso de peso " << endl;
    }
   

    return 0;
}