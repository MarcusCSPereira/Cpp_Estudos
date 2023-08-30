#include <iostream>

using namespace std;

int main()
{
    char caractere;
    int x1;
    cout << "Digite um caractere: ";
    cin >> caractere;

    x1 = static_cast<int>(caractere);
    cout << "O numero correspondente ao caractere " << caractere << " pela tabela ASCII e: " << x1 << endl;

    return 0;
}
