#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Digite o primeiro número inteiro: ";
    cin >> m;
    cout << "Digite o segundo número inteiro: ";
    cin >> n;

    for(int i = m + 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

