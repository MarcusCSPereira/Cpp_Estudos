#include <iostream>
using namespace std;

bool razao(float n1, float n2, float& res);

int main(){
    	
    float a, b;

    cout << "Digite o numerador da sua fracao: ";
    cin >> a;
    cout << "Digite o denominador da sua fracao: ";
    cin >> b;

    if(razao(a, b, a)){
        cout << "\nA operacao foi possivel tendo como resultado: " << a << endl;
    }else{
        cout << "\nA operacao nao foi possivel" << endl;
    }




    return 0;
}

bool razao(float n1, float n2, float& res){
    res = n1/n2;
    if(n2 != 0){
        return true;
    }else{
        return false;
    }
}