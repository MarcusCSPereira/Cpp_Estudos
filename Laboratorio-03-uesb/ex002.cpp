#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    
    int m, n, soma = 0;

    cout << "Digite um numero inteiro: ";
    cin >> m;
    cout << "Digite outro numero inteiro maior que o primeiro: ";
    cin >> n;

    while(m < n - 1){
        m++;
        cout << m << " ";
        soma = m + soma;
    }

    cout << "\n\n";
    cout << "A soma dos numeros e: " << soma << endl;

    return 0;
}
