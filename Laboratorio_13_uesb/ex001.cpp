#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

int pesquisaLinear(int vetor[500], int chave);

using namespace std;

int main()
{
    srand(time(0));

    int vetor[500], x, loc;

    for(int i=0; i < 500 ; i++){
        vetor[i]=rand(); 
        /* posso usar aqui vetor.push_back(rand()), mas vou precisar da biblioteca <vector>;, mas pra isso preciso declarar o vetor como classe sendo: vector<int> vetor; e assim eu preciso declarar o tamanho dele em outra variável*/
    }

    for(int i = 0; i < 500 ; i++){
        cout << vetor[i] << " ";
    }

    cout << "\nDigite a chave que deseja buscar nesse vetor e eu te direi a primeira posicao do vetor em que ela se encontra: ";
    cin >> x;

    loc = pesquisaLinear(vetor, x);

    if(loc == -1){
        cout << "Esse numero que voca digitou nao esta contido nesse vetor" << endl;
    }else{
        cout << "O numero que voce digitou aparece primeiro na posicao " << loc << " desse vetor" << endl;
    }



    return 0;
}

int pesquisaLinear(int vetor[500], int chave){
    for(int i=0; i < 500; i++){
        if(vetor[i] == chave){
            return i;
        }
    }
    return -1;
}
