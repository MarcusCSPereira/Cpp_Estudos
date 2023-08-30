#include <iostream>

using namespace std;

int main() {
    int num, valor, soma = 0;
    double media;

    cout.precision(2);
    
    cout << "Sua sala tem quantos alunos: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        cout << "Digite a idade do aluno: " << i << " ";
        cin >> valor;
        soma = valor + soma;
    }
    
    media = soma / num;

    if(media > 0 and media <= 25){
    cout << fixed << "\nA media dos alunos da turma e: " << media << endl;
    cout <<"Turma jovem";

    }else if(media >= 26 and media <= 60){
    cout << fixed << "\nA media dos " << num << " valores e: " << media << endl;
    cout << "Turma adulta";

    }else if(media > 60){
    cout << fixed << "\nA media dos " << num << " valores e: " << media << endl;
    cout << "Turma idosa";


    }
    
    return 0;
}
