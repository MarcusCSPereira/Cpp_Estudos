#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char x1;
    cout << "Digite seu sexo [M/F]:  " << endl;
    cin >> x1;

    if(x1 == 'M' or x1 == 'm'){
        cout << "Masculino" << endl;
    }else if(x1 == 'F' or x1 == 'f'){
        cout << "Feminino" << endl;
    }else{
        cout << "Valor digitado invalido" << endl;
    }

    return 0;
}