#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout.precision(2);
    float x1, x2;
    cout << "Digite a sua altura em metros: " << endl;
    cin >> x1;
    x2 = (72.7 * x1) - 58;
    cout << fixed << "O seu peso ideal e: " << x2 << "kg" << endl;

    return 0;
}