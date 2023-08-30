#include <iostream>
using namespace std;

void teste();

int main() {
    int input = 0;

    while (input != -1) {
        cout << "Digite -1 para sair ou qualquer outro numero para chamar a funcao teste: ";
        cin >> input;

        if (input != -1) {
            teste();
        }
    }

    return 0;
}


void teste() {
    static int contador = 0; 
    int nova = 0; 

    contador++;
    nova += 5;

    cout << "contador: " << contador << ", nova: " << nova << endl;
}
