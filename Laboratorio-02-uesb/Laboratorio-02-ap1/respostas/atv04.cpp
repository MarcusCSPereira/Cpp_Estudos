#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int a;



    system("cls");
    inicio:
    cout << "Digite um valor inteiro positivo: ";
    cin >> a;

    if (a <0)
    {
        system("cls");
        cout << "Voce digitou um valor NEGATIVO sendo ele: " << a << " ,tente novamente" << endl;
        goto inicio;
    }

        cout << "O valor que vc digitou e POSITIVO, sendo ele: " << a << endl;
    


    return 0;
}
