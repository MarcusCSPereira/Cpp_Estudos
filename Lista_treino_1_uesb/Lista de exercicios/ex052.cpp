#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int a, multi;
    long long i;
    char opc;
    
    inicio:
    
    cout << "Qual numero voce deseja fatorar: ";
    cin >> i;
    if(i > 15 or i < 0){
        system("cls");
        cout << "O numero que voce digitou nao e apto para ser fatorado tente novamente.\n\n(Dica: tente numeros maiores que 0 e menores que 16.)\n" << endl;
        goto inicio;
    }
    a = i - 1;
    cout << i << "! = ";
    cout << i << "." << a;
    multi = i;
while(a > 1){
    multi = multi * a ;
    a--;
    cout << "." << a;
    i--;
    }
     
    cout << " = " << multi << endl;
    cout << "Deseja fatorar outro numero: [S]/[N] ";
    cin >> opc;
    
    if (opc == 'S' or opc == 's')
    {
        goto inicio;
    }

    return 0;

}
