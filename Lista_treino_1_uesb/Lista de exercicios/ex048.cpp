#include <iostream>
using namespace std;

int main() {
    int num1 = 0, num2 = 1, soma = 0;
   
   while(soma <= 500){
    cout << soma <<" ";
    soma = num1 + num2;
    num1 = num2;
    num2 = soma;


   }
   

   
   


    return 0;
}
