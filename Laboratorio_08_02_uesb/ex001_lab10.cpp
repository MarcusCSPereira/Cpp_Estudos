#include <iostream>
using namespace std;

int soma(int n1, int n2);
float soma(int n1, float n2);
int soma(int n1, int n2, int n3);

int main(){
    	
    int a, b, c;
    float d;
    
    cout << "Digite um numero inteiro: ";
    cin >> a;
    cout << "\nDigite outro numero inteiro: ";
    cin >> b;
    cout << "\nDigite um numero inteiro: ";
    cin >> c;
    cout << "\nDigite um numero float: ";
    cin >> d;

    cout << "\nA primeira funcao soma retorna: " << soma(a, b);
    cout << "\nA segunda funcao soma retorna: " << soma(a, d);
    cout << "\nA terceira funcao soma retorna: " << soma(a, b, c);

    return 0;
}

int soma(int n1, int n2){
    return n1+n2;
}

float soma(int n1, float n2){
    return n1+n2;
}

int soma(int n1, int n2, int n3){
    return n1+n2+n3;
}