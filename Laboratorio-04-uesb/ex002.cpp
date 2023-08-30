#include <iostream>
using namespace std;

int main() {
    int m, n, soma = 0;
    cout << "Digite o primeiro número inteiro: ";
    cin >> m;
    cout << "Digite o segundo número inteiro: ";
    cin >> n;

    for(int i = m + 1; i < n; i++) {
        cout << i << " ";
        soma += i;
    }
    cout << endl;
    cout << "A soma dos números é: " << soma << endl;

    return 0;
}
