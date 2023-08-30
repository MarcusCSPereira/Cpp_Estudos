#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, x2, x3, media;
    cout << "Digite uma nota:  " << endl;
    cin >> x1;
    cout << "Digite outra nota:  " << endl;
    cin >> x2;
    cout << "Digite a ultima nota:  " << endl;
    cin >> x3;
    media = (x1 + x2 + x3) / 3;
    cout << "A media das notas e: " << media << endl;

    return 0;
}
