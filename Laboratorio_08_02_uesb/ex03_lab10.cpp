#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int gera(int n1 = 15);

int main(){
    	
    srand(time(0));

    int m, result1, result2;

    do{
        cout << "\nDigite um valor para um sorteio de um numero entre 0 e esse valor: ";
        cin >> m;
        result1 = gera();
        result2 = gera(m);
        cout << "\nSem argumento o resultado do sorteio entre 0 e 15 eh igual a: " << result1 << endl;
        cout << "\nCom argumento o resultado do sorteio entre 0 e " << m << " eh igual a: " << result2 << endl;
    }while(m != -1);

    return 0;
}

int gera(int n1){
    int random;
    random = rand()%(n1 - 1) + 1;
    return random;
}