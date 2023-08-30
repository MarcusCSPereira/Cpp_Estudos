#include <iostream>
using namespace std;

int main() {
 int i, a, b, soma = 0;

 cout << "Digite um numero:: " << endl;
 cin >> a;
 cout << "Digite outro numero:: " << endl;
 cin >> b;
 cout << "\n";
 cout << "O intervalo desses numeros: [" << a << "," << b << "]" << endl;
 cout << "\n";
 i= a;

 while(i <= b){
    cout << i << " ";
    soma = i + soma;
    i++;
 }
    cout << "\n" << endl;
    cout << "A soma desses numeros e: " << soma << endl;
  
   return 0;
}
