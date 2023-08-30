#include <iostream>

using namespace std;

int main() {
    int num;
    bool eh_primo = true;
    
    cout << "Digite um numero inteiro: ";
    cin >> num;
    
    if (num > 1) {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                eh_primo = false;
            }
        }
        
        if (eh_primo) {
            cout << num << " e um numero primo" << endl;
        } else {
            cout << num << " nao e um numero primo" << endl;
        }
    } else {
        cout << num << " nao é um numero primo" << endl;
    }
    
    return 0;
}
