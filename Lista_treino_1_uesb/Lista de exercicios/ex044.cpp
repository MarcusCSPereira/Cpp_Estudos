#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
 int i, a;
 system("cls");
inicio:

 cout << "Digite um numero entre 1 e 10 que vc deseja ver a tabuada: ";
 cin >> i;
 
 if(i < 0 or i > 10){
    cout << "\nValor invalido tente novamente\n" << endl;
    goto inicio;

 }else{
 cout << "\nTabuada do: " << i << "\n\n";
 for(a = 1; a <= 10; a++){
   cout << i << " X " << a << " = " << i*a << endl;
    }
 }
 
 return 0;
}
