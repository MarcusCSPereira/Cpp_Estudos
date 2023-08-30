#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x1, x2;
    const float pi = 3.1415;
    cout << "Digite o raio do circulo:  " << endl;
    cin >> x1;
    x2 = pi * pow(x1,2);
    cout << "A area do circulo é igual a:" << x2 << endl;

    return 0;
}