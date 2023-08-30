#include <iostream>
using namespace std;

int main(){
    	
    int idade, cont = -1, cont2 = -1;

    while(idade > 0){
        cout << "Digite as idades dos alunos da UESB: ";
        cin >> idade;
        cout << endl;
        if(idade < 25){
            cont++;
        }
        cont2++;
    }

    cout << "De " << cont2 << " alunos da Uesb " << (cont) << " tem menos de 25 anos"<< endl;

    return 0;
}

