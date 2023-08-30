#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout.precision(2);
    float x1, x2;
    int seg, tempomin, tempseg;
    cout << "Qual o tamanho do seu arquivo de download em MB: " << endl;
    cin >> x1;
    cout << fixed << "Qual a velocidade de download da sua internet ? (MB/s) " << endl;
    cin >> x2;
    seg = x1 / x2;
    tempomin = seg / 60;
    tempseg = seg % 60;

    cout << fixed << "O tempo (em minutos) com a sua internet e de: " << tempomin << " minutos e " << tempseg << " segundos" << endl;

    return 0;
}