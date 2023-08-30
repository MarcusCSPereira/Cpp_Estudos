#include <iostream>
using namespace std;

int main() {
   string nome;
   int idade;
   float salario;
   char estadoCivil;

   do {
      cout << "Digite o nome (maior que 3 caracteres): ";
      cin >> nome;
   } while (nome.length() <= 3);

   do {
      cout << "Digite a idade (entre 0 e 150): ";
      cin >> idade;
   } while (idade < 0 || idade > 150);

   do {
      cout << "Digite o salário (maior que zero): ";
      cin >> salario;
   } while (salario <= 0);

   do {
      cout << "Digite o estado civil ('s', 'c', 'v', 'd' ou 'u'): ";
      cin >> estadoCivil;
   } while (estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v' && estadoCivil != 'd' && estadoCivil != 'u');

   cout << "\nNome: " << nome << endl;
   cout << "Idade: " << idade << endl;
   cout << "Salário: " << salario << endl;
   cout << "Estado civil: " << estadoCivil << endl;

   return 0;
}
