#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char x1;
    cout << "Digite uma letra:  " << endl;
    cin >> x1;

    if(x1 == 'a' or x1 == 'e' or x1 == 'i' or x1 == 'o' or x1 == 'u' or x1 == 'A' or x1 == 'E' or x1 == 'I' or x1 == 'O' or x1 == 'U'){
        cout << "A letra digitada e uma vogal" << endl;
    }else{
        cout << "A letra digitada e uma consoante" << endl;
    }

    return 0;
}