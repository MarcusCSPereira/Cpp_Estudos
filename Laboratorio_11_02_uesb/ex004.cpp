#include <iostream>

using namespace std;
void imprime2(int );
void imprime(int x, int y = 0);

int main(){
	int n;
	
	cout << "Digite o valor de n: ";
	cin >> n;
	imprime2(n);
	
	return 0;
}
void imprime(int x, int y){
	cout << y << " ";
	if(y != x ){
		imprime(x, y + 1);
	}
}

void imprime2(int i){
	
	if (i != 0){
		imprime2(i-1);
	}
	cout << " "<< i;
}
