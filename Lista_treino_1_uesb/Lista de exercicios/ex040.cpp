#include <iostream>
using namespace std;

int main() {
   const int TAMANHO = 5;
   int numeros[TAMANHO];
   int soma = 0;
   float media;

   for (int i = 0; i < TAMANHO; i++) {
      cout << "Digite o " << i+1 << "o numero: ";
      cin >> numeros[i];
      soma += numeros[i];
   }


   media = (soma) / TAMANHO;

   cout << "A soma dos numeros e: " << soma << endl;
   cout << "A media dos numeros e: " << media << endl;

   return 0;
}
