#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout.precision(2);
    float x1, x2;
    char opc;
    
    cout << "Digite a sua altura em metros: " << endl;
    cin >> x1;
    cout << "Digite o seu sexo: [M] = MASCULINO / [F] = FEMININO " << endl;
    cin >> opc;
    
    if(opc == 'M' or opc == 'm'){
        x2 = ((72.7 * x1 ) - 58);
        cout << "Masculino" << endl;
        cout << "Seu peso ideal e: " << x2 << endl;
        
    }else if(opc == 'F' or opc == 'f'){
        x2 = ((62.1 * x1) - 44.7);
        cout << "Feminino" << endl;
        cout << "Seu pedom ideal e: " << x2 << endl;
    }else{
        cout << "Sexo invalido" << endl;
    }
   
   
   
   
    cout << fixed << "O seu peso ideal e: " << x2 << "kg" << endl;

    return 0;
}