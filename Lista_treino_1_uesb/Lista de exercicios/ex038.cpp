#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
   int i;
   char opc;
   i=0;

   while(i < 20){
    i++;
    cout << i << " ";
   }
   
   cout << endl;

    i= 0;
    cout << "Digite uma letra para fazer a proxima execucao: " << endl;
    cin >> opc;
    
    if(opc ==' '){
        ;
    }else{
    system("cls");
    while(i < 20){
    i++;
    cout << i << endl;
   }
    }
    

}
