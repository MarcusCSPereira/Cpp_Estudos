#include <iostream>
using namespace std;

int main() {
    float base, resultado = 1;
    int expoente;

    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite o expoente: ";
    cin >> expoente;

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    cout << base << " elevado a " << expoente << " = " << resultado << endl;

    return 0;
}
