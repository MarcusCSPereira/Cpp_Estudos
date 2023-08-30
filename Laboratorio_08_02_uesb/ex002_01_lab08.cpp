#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int gerador(int n1, int n2);

int main(){
    	
    srand(time(0));

    int a, b, c;

    cout << "Digite um primeiro numero: ";
    cin >> a;
    cout << "Digite um segundo numero: ";
    cin >> b;

    c = gerador(a, b);
    cout << "\nO numero randomico sorteado entre " << a << " e " << b << " sorteado foi: " << c << endl;

    
    
    return 0;
}

int gerador(int n1, int n2) {
int random = rand() % (n2 - n1 + 1) + n1;
return random;
}