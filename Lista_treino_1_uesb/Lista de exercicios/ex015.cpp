#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, x2, x3;
    cout << "Digite um numero :  " << endl;
    cin >> x1;
    cout << "Digite outro numero:  " << endl;
    cin >> x2;

    if(x1 >= x2){
        cout << x1 << endl;
        cout << x2 << endl;
    }else{
        cout << x2 << endl;
        cout << x1 << endl;
    }
    return 0;
}