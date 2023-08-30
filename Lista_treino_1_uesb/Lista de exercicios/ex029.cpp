#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double LATA_PRECO = 80.0;
    const double GALAO_PRECO = 25.0;
    const double LATA_CAPACIDADE = 18.0;
    const double GALAO_CAPACIDADE = 3.6;

    double area, tinta_total, tinta_latas, tinta_galoes;
    int latas, galoes, latas_min, galoes_min;
    double preco_latas, preco_galoes, preco_min;

    cout << "Digite o tamanho da area a ser pintada em metros quadrados: ";
    cin >> area;

    tinta_total = area * 1.1 / 6.0;
    latas = ceil(tinta_total / LATA_CAPACIDADE);
    tinta_latas = latas * LATA_CAPACIDADE;
    galoes_min = ceil((tinta_total - tinta_latas) / GALAO_CAPACIDADE);
    galoes = tinta_total / GALAO_CAPACIDADE;

    preco_min = latas * LATA_PRECO + galoes * GALAO_PRECO;
    latas_min = latas;

    for (int l = latas; l <= latas + 1; l++) {
        for (int g = 0; g <= 5; g++) {
            tinta_galoes = g * GALAO_CAPACIDADE;
            preco_latas = l * LATA_PRECO;
            preco_galoes = g * GALAO_PRECO;

            if (tinta_latas + tinta_galoes >= tinta_total) {
                if (preco_latas + preco_galoes < preco_min) {
                    preco_min = preco_latas + preco_galoes;
                    latas_min = l;
                    galoes_min = g;
                }
            }
        }
    }

    cout << "\nQuantidade de tinta necessaria: " << tinta_total << " litros" << endl;

    cout << "\nOpcao a: comprar apenas latas de 18 litros" << endl;
    cout << "Quantidade de latas: " << latas << endl;
    cout << "Preco total: R$ " << latas * LATA_PRECO << endl;

    cout << "\nOpcao b: comprar apenas galoes de 3,6 litros" << endl;
    cout << "Quantidade de galoes: " << galoes << endl;
    cout << "Preco total: R$ " << galoes * GALAO_PRECO << endl;

    cout << "\nOpcao c: misturar latas e galoes de forma a minimizar o preco" << endl;
    cout << "Quantidade de latas: " << latas_min << endl;
    cout << "Quantidade de galoes: " << galoes_min << endl;
    cout << "Preco total: R$ " << preco_min << endl;

    return 0;
}
