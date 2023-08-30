#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int num, valor, soma = 0;
    double media;

    cout.precision(2);
    
    cout << "Voce tem quantas turmas: ";
    cin >> num;
    for(int i = 1; i <= num; i++){
        inifor:
        cout << "Digite o numeros de alunos da turma " << i << ": ";
        cin >> valor;
        if(valor > 40){
            cout << "\nNao e permitido mais doq 40 alunos numa turma tente novamente.\n" << endl;
            goto inifor;
        }
        soma = valor + soma;
    }
    
    media = soma / num;
    cout << media;
    return 0;
}
