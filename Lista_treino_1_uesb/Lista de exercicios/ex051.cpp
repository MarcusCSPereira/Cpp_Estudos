#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int num, menor, maior, soma = 0, i , a = 1;

    inicio:

    cout << "Quantos numeros voce deseja digitar: ";
    cin >> i;
    cout << "Digite um numero: " << endl;
    cin >> num;
    menor = num;
    maior = num;
    soma += num;
    if(i == 1){
        goto final;
    }
    
    if(num <= 0 or num >= 1000){
        system("cls");
        cout << "O valor que vc digitou e invalido, volte do inicio e tente novamente. Dica: tente valores entre 0 e 1000.\n" << endl;
        goto inicio;
}

   
    do{
     
        cout << "Digite um numero: " << endl;
        cin >> num;
        if(num <= 0 or num >= 1000){
            system("cls");
            cout << "O valor que vc digitou e invalido, volte do inicio e tente novamente. Dica: tente valores entre 0 e 1000.\n" << endl;
            goto inicio;
        }
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

        final:

        cout << "\nO maior numero foi: " << maior << endl;
        cout << "O menor numero foi: " << menor << endl;
        cout << "A soma de todos os numeros foi: " << soma << endl;
         
    
    
   return 0;
}
