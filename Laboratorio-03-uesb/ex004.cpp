#include <iostream>
using namespace std;

int main()
{

    int a, soma = 0, cont = 0;
    float media;
    

    while(a > 0){
        cout << "Digite a idade dos aluno da escola: ";
        cin >> a;
        cout << endl;

        soma = soma + a;
        cont++;

    }

    media= soma/(cont - 1);

    cout << "A média dos alunos da escola é: " << media;

    return 0;
}
