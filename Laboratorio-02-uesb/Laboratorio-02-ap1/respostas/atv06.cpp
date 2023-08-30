#include <iostream>
using namespace std;

int main() {
    int numcart;
    double saldoprin, totgasto, totpago, limite, saldofin, restlim;

    cout.precision(2);

    cout << "Digite o numero do cartao: ";
    cin >> numcart;
    cout << "Digite o saldo no inicio do mes: ";
    cin >> saldoprin;
    cout << "Digite o total gasto no mes: ";
    cin >> totgasto;
    cout << "Digite o total pago no mes: ";
    cin >> totpago;
    cout << "Digite o limite do cartao: ";
    cin >> limite;

    saldofin = saldoprin + totgasto - totpago;

    if (saldofin > limite) {
        cout << "O cliente: " << numcart << fixed <<  " excedeu o limite do cartao em: " << (saldofin - limite);
    } else {
        cout << "O cliente nao excedeu o limite do cartao de crédito";
    }

    return 0;
}
