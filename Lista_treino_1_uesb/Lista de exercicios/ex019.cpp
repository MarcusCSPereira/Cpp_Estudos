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
    cout << "Digite um ultimo numero: " << endl;
    cin >> x3;
    cout << "\n\n" << endl;

    if(x1 >= x2 and x1 >= x3){
        cout << x1 << endl;
    }else if(x2 >= x1 and x2 >= x3){
        cout << x2 << endl;
    }else{
        cout << x3 << endl;
    }
    return 0;
}