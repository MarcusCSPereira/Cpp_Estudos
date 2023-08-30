#include <iostream>
using namespace std;

void por10(float n1, float n2, float& res1, float& res2);

int main(){
    	
    float a, b;

    cout << "Digite o primeiro valor para dividir por 10: ";
    cin >> a;
    cout << "Digite o segundo valor para dividir por 10: ";
    cin >> b;

    por10(a, b, a, b);

    cout << "\nO primeiro valor dividido por 10 ficou: " << a << endl;
    cout << "\nO segundo valor dividido por 10 ficou: " << b << endl;

    return 0;
}

void por10(float n1, float n2, float& res1, float& res2){
    res1 = n1/10;
    res2 = n2/10;
}