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

    if(x1 >= x2 and x2 >= x3){
        cout << x1 << endl;
        cout << x2 << endl;
        cout << x3 << "\n" << endl;
    }else if(x2 >= x1 and x1 >= x3){
        cout << x2 << endl;
        cout << x1 << endl;
        cout << x3 << "\n" << endl;
    }else if(x2 >= x3 and x3 >= x1){
        cout << x2 << endl;
        cout << x3 << endl;
        cout << x1 << "\n" << endl;
    }else if(x1 >= x3 and x3 >= x2){
        cout << x1 << endl;
        cout << x3 << endl;
        cout << x2 << "\n" << endl;
    }else if(x3 >= x1 and x1 >= x2){
        cout << x3 << endl;
        cout << x1 << endl;
        cout << x2 << "\n" << endl;
    }else{ 
        cout << x3 << endl;
        cout << x2 << endl;
        cout << x1 << "\n" << endl;
    }

    return 0;
}