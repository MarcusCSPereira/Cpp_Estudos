#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x1, x2;
    cout << "Digite a temperatura em graus Farenheit:  " << endl;
    cin >> x1;
    x2 = (x1 - 32) / 1.8;
    cout << "A temperatuta em celsius e: " << x2 << endl;

    return 0;
}