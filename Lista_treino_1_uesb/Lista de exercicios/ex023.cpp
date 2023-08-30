#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char x1;
    cout << "Digite em que turno voce estuda [M] = MATUTINO / [V] = VESPERTINO / [N] = NOTURNO :  " << endl;
    cin >> x1;

    if(x1 == 'M' or x1 == 'm'){
        cout << "BOM DIAA !" << endl;
    }else if(x1 == 'V' or x1 == 'v'){
        cout << "BOA TARDEE !" << endl;
    }else if(x1 == 'N' or x1 == 'n')
    {
        cout << "BOA NOITEE !" << endl;
    }else{
        cout << "Valor digitado invalido" << endl;
    }

    return 0;
}