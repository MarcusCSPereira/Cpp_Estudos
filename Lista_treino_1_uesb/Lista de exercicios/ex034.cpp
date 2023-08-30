#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    string x, y;
    cout << "digite o seu nome de usuario: " << endl;
    cin >> x;
    cout << "digite a sua senha: " << endl;
    cin >> y;


    while(x == y){
        cout << "Sua senha nao pode ser igual ao seu nome de usuario\n" << endl;
        cout << "digite novamente seu nome de usuario" << endl;
        cin >> x;
        cout << "digite novamente sua senha" << endl;
        cin >> y;
    }
        cout << "Acesso permitido" << endl;
    return 0;
}
