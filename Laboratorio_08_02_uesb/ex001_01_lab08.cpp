#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int gerador(int n1);

int main(){
    	
    srand(time(0));

    int a, b;

    cout << "Digite um numero para ser sorteado outro numero entre 0 e ele: ";
    cin >> a;
    b = gerador(a);
    cout << "\nO numero randomico sorteado foi: " << b << endl;

    
    
    return 0;
}

int gerador(int n1){
    int random;
    random = rand()%(n1 - 1) + 1;
    return random;
}