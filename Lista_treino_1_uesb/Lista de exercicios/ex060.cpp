#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int num;
    double soma = 0;

    cout.precision(2);
    inicio:
    cout << "O cliente esta levando quantos produtos ";
    cin >> num;
    if(num > 50){
        cout << "\nVoce esta levando produtos demais, voce pode levar ate 50 produtos.\n" << endl;
        goto inicio;
    }
    for(int i = 1; i <= num; i++){
        soma = soma + 1.99;
    }
    
    cout << fixed << "O valor total da compra de " << num << " produtos foi: R$ " << soma;
    return 0;
}
