#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x1, x2, x3;
    cout << "Digite um lado do quadrado:  " << endl;
    cin >> x1;
    x2 = pow(x1,2);
    x3 = x2 * 2;
    cout << "A area do quadrado e igual a:" << x2 << endl;
    cout << "O dobro da area desse quadrado e igual a: " << x3 << endl;

    return 0;
}