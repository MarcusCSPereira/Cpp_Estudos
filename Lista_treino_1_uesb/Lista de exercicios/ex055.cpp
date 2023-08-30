#include <iostream>

using namespace std;

int main() {
    int num;
    bool eh_primo;
    
    cout << "Digite um numero inteiro: ";
    cin >> num;
    
    for (int i = 1; i <= num; i++) {
        eh_primo = true;
        
        if (i > 1) {
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    eh_primo = false;
                    break;
                }
            }
        } else {
            eh_primo = false;
        }
        
        if (eh_primo) {
            cout << i << " ";
        }
    }
    
    cout << ": Sao primos" << endl;
    
    return 0;
}
