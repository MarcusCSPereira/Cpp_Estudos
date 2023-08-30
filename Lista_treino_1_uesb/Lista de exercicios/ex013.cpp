#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x1, x2, total, inss, ir, sind, sl;
    cout << "Digite o quanto voce ganha por hora:  " << endl;
    cin >> x1;
    cout << "Digite quantas horas voce trabalha no mes: " << endl;
    cin >> x2;
    total = x1 * x2;
    ir = 0.11 * total;
    inss = 0.08 * total;
    sind = 0.05 * total;
    sl = total - (inss + inss + ir);

    cout << "Seu salario bruto e de: " << total << endl;
    cout << "Voce pagou para o INSS um total de: " << inss << endl;
    cout << "VOce pagou ao SINDICATO um total de: " << sind << endl;
    cout << "Seu salario liquido e de: " << sl << endl;


    return 0;
}