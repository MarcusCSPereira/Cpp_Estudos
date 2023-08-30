#include <iostream>

using namespace std;

int soma(int x);

int main(){
	int n, result;
	
	cout << "Digite o valor de n: ";
	cin >> n;
	result = soma(n);
	cout << result << endl;
	
	return 0;
	
}

int soma(int x){
	cout << x << " + ";
	if(x==1){
		cout << "0 = ";
		return 1;
	}
	if(x==0){
		return 0;
	}
	return (soma(x-1) + x);
}
