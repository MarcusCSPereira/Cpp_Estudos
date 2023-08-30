#include <iostream>

using namespace std;

void imprime(int x);

int main(){
	int n;
	
	cout << "Digite o valor de n: ";
	cin >> n;
	imprime(n);
	
	return 0;
}
void imprime(int x){
	cout << x << " ";
	if(x != 0){
		imprime(x-1);
	}
}
