#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    double a, b;
    char opc;

    system("cls");

    inicio:
    cout.precision(2);
    cout << "Digite o primeiro valor: ";
    cin >> a;
    cout << "Digite o segundo valor: ";
    cin >> b;
    
    cout << "Digite a operacao que vc deseja realizar: " << endl;
    cout <<  "[+] soma \n";
    cout <<  "[-] subtracao \n";
    cout <<  "[x] multiplicacao \n";
    cout <<  "[/] divisao \n";
    cin >> opc;

    if (opc == '+')
    {
        cout << fixed << "O valor da soma de " << a << " + " << b << " foi: " << (a + b) << endl;
    }else if(opc == '-'){
        cout << fixed << "O valor da subtracao de " << a << " - " << b << " foi: " << (a - b) << endl;
    }else if(opc == 'x' or opc == 'X'){
        cout << fixed << "O valor da multiplicacao de " << a << " x " << b << " foi: " << (a * b) << endl;
    }else if(opc == '/'){
        cout << fixed << "O valor da divisao de " << a << " / " << b << " foi: " << (a / b)  << endl; 
    }else{
        system("cls");
        cout << "Voce digitou algum valor errado tente novamente. (OBS: tente digitar como foi demonstrado!)" << endl;
        goto inicio;
    }


    return 0;
}
