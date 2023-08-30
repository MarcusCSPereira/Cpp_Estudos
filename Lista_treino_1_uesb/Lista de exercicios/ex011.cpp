#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, x2, a;
    float x3, b, c;
    cout << "Digite um numero inteiro:  " << endl;
    cin >> x1;
    cout << "Digite outro numero inteiro:  " << endl;
    cin >> x2;
    cout << "Digite um numero real: " << endl;
    cin >> x3;
    a = (2 * x1) * (x2 / 2);
    b = (3 * x1) + (x3);
    c = pow(x3,3);

    cout << "A= " << a << endl;
    cout << "B= " << b << endl;
    cout << "C= " << c << endl;

    return 0;
}