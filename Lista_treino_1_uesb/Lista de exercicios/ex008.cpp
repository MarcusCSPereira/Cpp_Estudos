#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x1, x2, total;
    cout << "Digite o quanto voce ganha por hora:  " << endl;
    cin >> x1;
    cout << "Digite quantas horas voce trabalha no mes: " << endl;
    cin >> x2;
    total = x1 * x2;
    cout << "Seu salario no mes e de: " << total << endl;

    return 0;
}