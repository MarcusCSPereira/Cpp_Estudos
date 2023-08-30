#include <iostream>
using namespace std;

int main() {
    int a, multi;
    long long i;

    cout << "Qual numero voce deseja fatorar: ";
    cin >> i;
    a = i - 1;
    cout << i << "! = ";
    cout << i << "." << a;
    multi = i;
while(a > 1){
    multi = multi * a ;
    a--;
    cout << "." << a;
    i--;
    }
     
    cout << " = " << multi << endl;

}
