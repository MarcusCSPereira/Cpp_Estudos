#include <iostream>
using namespace std;

int main() {
    int idade, contador = 0;
    float soma = 0;

    cout << "Digite as idades dos alunos (para encerrar, digite um número menor que 1):" << endl;

    do {
        cin >> idade;
        if(idade > 0) {
            soma += idade;
            contador++;
        }
    } while(idade > 0);

    if(contador == 0) {
        cout << "Nenhuma idade foi digitada." << endl;
    } else {
        float media = soma / contador;
        cout << "A média das idades dos alunos é: " << media << endl;
    }

    return 0;
}
