#include <iostream>
using namespace std;

int main() {
    int idade, contador = 0;

    cout << "Digite as idades dos alunos da UESB que responderam à pesquisa (para encerrar, digite um número menor que 1):" << endl;

    do {
        cin >> idade;
        if(idade > 0 && idade < 25) {
            contador++;
        }
    } while(idade > 0);

    cout << "O número de alunos com menos de 25 anos é: " << contador << endl;

    return 0;
}
