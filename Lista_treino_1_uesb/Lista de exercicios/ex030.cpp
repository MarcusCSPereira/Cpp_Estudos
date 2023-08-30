#include <iostream>
#include <cmath>

using namespace std;

int main()
{  
    int x;
    
    cout << "Digite um numero de 1 a 7: " << endl;
    cin >> x;

    switch (x)
    {
    case 1:
        cout << "Domingo" << endl;
        break;

    case 2:
        cout << "Segunda" << endl;
        break;

    case 3:
        cout << "Terca-feira" << endl;
        break;

    case 4:
        cout << "Quarta-feira" << endl;
        break;

    case 5:
        cout << "Quinta-feira" << endl;
        break;

    case 6:
        cout << "Sexta-feira" << endl;
        break;

    case 7:
        cout << "Sabado" << endl;
        break;

    default:
        cout << "Valor digitado invalido" << endl;
        break;
    }

    return 0;
}
