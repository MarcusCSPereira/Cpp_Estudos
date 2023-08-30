#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float valor_hora, quantidade_horas, salario_bruto, ir, inss, fgts, total_descontos, salario_liquido;

    cout << "Digite o valor que voce ganha hora: ";
    cin >> valor_hora;
    cout << "Digite a quantidade de horas trabalhadas no mes: ";
    cin >> quantidade_horas;

    salario_bruto = valor_hora * quantidade_horas;

    if (salario_bruto <= 2500) {
        ir = 0;
    } else if (salario_bruto <= 3500) {
        ir = salario_bruto * 0.05;
    } else if (salario_bruto <= 5500) {
        ir = salario_bruto * 0.10;
    } else {
        ir = salario_bruto * 0.20;
    }

    inss = salario_bruto * 0.10;
    fgts = salario_bruto * 0.11;
    total_descontos = ir + inss;
    salario_liquido = (salario_bruto - total_descontos);

    cout << fixed << setprecision(2);
    cout << "Salario Bruto: R$ " << salario_bruto << endl;
    cout << "(-) IR: R$ " << ir << endl;
    cout << "(-) INSS: R$ " << inss << endl;
    cout << "FGTS: R$ " << fgts << endl;
    cout << "Total de descontos: R$ " << total_descontos << endl;
    cout << "Salario Liquido: R$ " << salario_liquido << endl;

    return 0;
}
