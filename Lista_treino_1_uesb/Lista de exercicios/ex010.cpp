#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x1, x2;
    cout << "Digite a temperatura em graus Celsius:  " << endl;
    cin >> x1;
    x2 = (x1 * 1.8) + 32;
    cout << "A temperatuta em Farenheit e: " << x2 << endl;

    return 0;
}