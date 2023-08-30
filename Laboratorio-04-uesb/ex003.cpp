#include <iostream>
using namespace std;

int main() {
    int n, primeiro = 1, segundo = 1, proximo;

    cout << "Digite o valor de n: ";
    cin >> n;

    cout << primeiro << " " << segundo << " ";

    for(int i = 3; i <= n; i++) {
        proximo = primeiro + segundo;
        cout << proximo << " ";
        primeiro = segundo;
        segundo = proximo;
    }
    cout << endl;

    return 0;
}
