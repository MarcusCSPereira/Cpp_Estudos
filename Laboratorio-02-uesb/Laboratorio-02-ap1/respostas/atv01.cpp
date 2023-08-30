#include <iostream>

using namespace std;

int main()
{
    char caractere;
    int x1;
    cout << "Digite um valor inteiro: ";
    cin >> x1;

    caractere = static_cast<char>(x1);
    cout << "O caractere correspondente a " << x1 << " na tabela ASCII e: " << caractere << endl;

    return 0;
}
