#include <iostream>
using namespace std;

template <class T> void multiplos(T& soma, T x, int n);

int main(){
    	
    int x_int, n_int, soma_int = 1;
    double x_double, soma_double = 1;

    cout << "Digite o valor inicial do x: ";
    cin >> x_double;
    cout << "\nDigite o valor de n: ";
    cin >> n_int;
   
    x_int = x_double;
   
    if(x_double - x_int == 0){
        multiplos(soma_int, x_int, n_int);
        cout << "\nResultado: " << soma_int;
    }else{
        multiplos(soma_double, x_double, n_int);
        cout << "\nResultado: " << soma_double;
    }

    return 0;
}

template <class T> void multiplos(T& soma, T x, int n){
    for(int i = 1; i <= n; i++){
        soma += i * x;
    }
}