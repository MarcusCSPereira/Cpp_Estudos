#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    
    int a, m = 1, n = 1, soma=0;

    cout << "Ate que termo voce quer que a serie de fibonacci va: ";
    cin >> a;
    cout << endl;

    cout << m << " ";
    cout << n << " ";
    
    while(a > 2){
        soma = m + n;
        cout << soma << " ";
        n = m;
        m = soma;
        a--;
    }


    return 0;
}
