#include <iostream>
using namespace std;

int main() {
    int num, menor, maior, soma = 0, i , a = 1;

    cout << "Quantos numeros voce deseja digitar: ";
    cin >> i;
    cout << "Digite um numero: " << endl;
    cin >> num;
    menor = num;
    maior = num;
    soma += num;
   
   do{
    
    cout << "Digite um numero: " << endl;
    cin >> num;
    a++;
    soma = soma + num;
    
    if(num < menor)
    {
        menor = num;
    }

    if(num > maior)
    {
        maior = num;
    }
    


     }while(a < i);

     cout << "\nO maior numero foi: " << maior << endl;
     cout << "O menor numero foi: " << menor << endl;
     cout << "A soma de todos os numeros foi: " << soma << endl;
   
   return 0;
}
