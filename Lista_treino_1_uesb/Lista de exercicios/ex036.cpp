#include <iostream>
using namespace std;

int main() {
   int i;
   float A, B;
   A = 80000;
   B = 200000;
   i = 0;

   do {
      A += A * 0.03;
      B += B * 0.015;
      i++;
      }while ( A < B );

    cout << "O numero de anos necessarios para a populacao de A passar a populacao de B foi de: " << i << endl;
    cout << "Sendo a populacao de A: " << A << " e a populacao de B: " << B << endl;


   return 0;
}
