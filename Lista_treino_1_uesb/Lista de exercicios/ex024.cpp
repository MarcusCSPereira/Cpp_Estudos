#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout.precision(2);
    float x1, perc, novo, aumento;
    cout << "Digite o valor do seu salario atual: R$ " << endl;
    cin >> x1;

    if(x1 <= 1280){
        
        perc= 0.2;
        aumento= perc * x1;
        novo = x1 + aumento;
        
        cout << fixed <<"Seu salario antes do reajuste era de: " << x1 << endl;
        cout << fixed <<"O percentual de aumento aplicado ao seu salario foi de: 20% " << endl;
        cout << fixed <<"O valor do aumento do seu salario:" << aumento << endl;
        cout << fixed <<"O seu novo salario apos o aumento e de: " << novo << endl;

    }else if(x1 > 1280 and x1  <= 1700){
        
        perc= 0.15;
        aumento= perc * x1;
        novo = x1 + aumento;
        
        cout << fixed <<"Seu salario antes do reajuste era de: " << x1 << endl;
        cout << fixed <<"O percentual de aumento aplicado ao seu salario foi de: 15%" << endl;
        cout << fixed <<"O valor do aumento do seu salario:" << aumento << endl;
        cout << fixed <<"O seu novo salario apos o aumento e de: " << novo << endl;

    }else if(x1 > 1700 and x1 <= 2500)
    {
        perc= 0.1;
        aumento= perc * x1;
        novo = x1 + aumento;
        
        cout << fixed <<"Seu salario antes do reajuste era de: " << x1 << endl;
        cout << fixed <<"O percentual de aumento aplicado ao seu salario foi de: 10%" << endl;
        cout << fixed <<"O valor do aumento do seu salario:" << aumento << endl;
        cout << fixed <<"O seu novo salario apos o aumento e de: " << novo << endl;

    }else{
        perc= 0.05;
        aumento= perc * x1;
        novo = x1 + aumento;
        
        cout << fixed <<"Seu salario antes do reajuste era de: " << x1 << endl;
        cout << fixed <<"O percentual de aumento aplicado ao seu salario foi de: 5%" << endl;
        cout << fixed <<"O valor do aumento do seu salario:" << aumento << endl;
        cout << fixed <<"O seu novo salario apos o aumento e de: " << novo << endl;
    }

    return 0;
}