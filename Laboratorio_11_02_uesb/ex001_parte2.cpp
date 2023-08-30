#include <iostream>

using namespace std;

int potencial(int x, int y);

int main(){
	int j, i;
	cout << "Digite os valores de i e j: ";
	cin >> j >> i;
	cout << "O resultado eh: " << potencial(j,i);
	
}

int potencial(int x, int y){
	if(y == 1){
		return x;
	}
	return (x * potencial(x, y-1));
}
