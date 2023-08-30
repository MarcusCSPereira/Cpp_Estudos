#include <iostream>
using namespace std;

int main() {
    int num1 = 0, num2 = 1, i = 0, soma = 0, a;

    cout << "Digite o numero de algarismos que voce deseja na sequencia de fibonacci: ";
    cin >> a;
   
   while(a > i){
    cout << soma <<" ";
    soma = num1 + num2;
    num1 = num2;
    num2 = soma;
    i++;


   }
   

   
   


    return 0;
}
