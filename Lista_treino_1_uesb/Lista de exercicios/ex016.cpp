#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, x2, x3;
    cout << "Digite um numero: " << endl;
    cin >> x1;

    if(x1 >= 0){
        cout << "O valor e POSITIVO" << endl;
    }else{
        cout << "O valor e NEGATIVO" << endl;
    }
    return 0;
}