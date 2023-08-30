#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1;
    cout << "Digite a sua nota :  " << endl;
    cin >> x1;

    if(x1  >= 0 and x1 < 30){
        cout << "Sua nota foi E, pois voce pontuou: " << x1 << endl;
    }else if(x1 >=30 and x1 < 50){
        cout << "Sua nota foi D, pois voce pontuou: " << x1 << endl;
    }else if(x1 >= 50 and x1 < 70){
        cout << "Sua nota foi C, pois voce pontuou: " << x1 << endl;
    }else if(x1 >= 70 and x1 < 90){
        cout << "Sua nota foi B, pois voce pontuou: " << x1 << endl;
    }else if(x1 >=90 and x1 <=100){
        cout << "Sua nota foi A, pois voce pontuou: " << x1 << endl;
    }else{
        cout << "Valor digitado errado" << endl;
    }
    
    return 0;
}