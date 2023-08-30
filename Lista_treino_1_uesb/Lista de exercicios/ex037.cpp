#include <iostream>
using namespace std;

int main() {
   int populacaoA, populacaoB;
   float taxaCrescimentoA, taxaCrescimentoB;
   int anos;

   do {

      do {
         cout << "Digite a populacao do pais A: ";
         cin >> populacaoA;
      } while (populacaoA < 0);

      do {
         cout << "Digite a populacao do pais B: ";
         cin >> populacaoB;
      } while (populacaoB < 0);

      do {
         cout << "Digite a taxa de crescimento do pais A (em porcentagem): ";
         cin >> taxaCrescimentoA;
      } while (taxaCrescimentoA < 0);

      taxaCrescimentoA /= 100;

      do {
         cout << "Digite a taxa de crescimento do pais B (em porcentagem): ";
         cin >> taxaCrescimentoB;
      } while (taxaCrescimentoB < 0);

      taxaCrescimentoB /= 100;

      anos = 0;
      while (populacaoA < populacaoB) {
         populacaoA += populacaoA * taxaCrescimentoA;
         populacaoB += populacaoB * taxaCrescimentoB;
         anos++;
      }

      cout << "Em " << anos << " anos, a populacao do pais A ultrapassara ou igualara a populacao do pais B." << endl;

      char repetir;
      cout << "Deseja repetir a operacao? (s/n): ";
      cin >> repetir;
      if (repetir != 's' && repetir != 'S') {
         break;
      }
   } while (true);

   return 0;
}
