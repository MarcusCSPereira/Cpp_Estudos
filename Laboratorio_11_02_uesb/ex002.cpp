#include <iostream>

using namespace std;

int mult(int x, int y);

int main(){
	int n, m;
	
	cout << "Digite o valor de n: ";
	cin >> n;
	cout << "Digite o valor de m: ";
	cin >> m;
	cout << mult(n,m);
	
	return 0;
}
int mult(int x, int y){
	cout << y << endl;
	if(y == 1){
		return x;
	}
	if(x == 0 or y == 0){
		return 0;
	}
	return (x + mult(x, y - 1));
}
