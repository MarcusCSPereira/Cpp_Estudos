#include <iostream>
using namespace std;

int main() {
   int num1, num2, num3, num4, num5;
   int maior;

   cout << "Digite o primeiro número: ";
   cin >> num1;

   cout << "Digite o segundo número: ";
   cin >> num2;

   cout << "Digite o terceiro número: ";
   cin >> num3;

   cout << "Digite o quarto número: ";
   cin >> num4;

   cout << "Digite o quinto número: ";
   cin >> num5;

   maior = num1;
   if (num2 > maior) {
      maior = num2;
   }
   if (num3 > maior) {
      maior = num3;
   }
   if (num4 > maior) {
      maior = num4;
   }
   if (num5 > maior) {
      maior = num5;
   }

   cout << "O maior número é: " << maior << endl;

   return 0;
}
