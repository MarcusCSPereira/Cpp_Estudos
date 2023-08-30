#include <iostream>
using namespace std;

int digitos(int n, int d);

int main() {
    
    int n, d, contador2;
    
    cout << "Digite um numero inteiro positivo (n): ";
    cin >> n;
    
    cout << "Digite um digito (d): ";
    cin >> d;
    
    contador2 = digitos(n, d);
  
    cout << "O digito " << d << " ocorre " << contador2 << " vezes no numero " << n << endl;
    
    return 0;
}

int digitos(int n, int d) {
    int cont = 0;
    
    while (n > 0) {
        int digito = n % 10;
        
        if (digito == d) {
            cont++;
        }
        
        n /= 10; 
    }
    
    return cont;
}