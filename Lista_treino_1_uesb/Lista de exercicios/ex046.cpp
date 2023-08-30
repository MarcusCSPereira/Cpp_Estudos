#include <iostream>
using namespace std;

int main() {
    int num, pares = 0, impares = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Digite o " << i << "o numero: ";
        cin >> num;

        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "Quantidade de numeros pares: " << pares << endl;
    cout << "Quantidade de numeros impares: " << impares << endl;

    return 0;
}
