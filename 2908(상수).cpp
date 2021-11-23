#include <iostream>
using namespace std;

int change(int k);

int main(void){
	int n, m;
	
	cin >> n >> m;
	
	n = change(n);
	m = change(m);
	

	if(n>m){
		cout<<n;
	}
	else if(n<m){
		cout << m;
	}
}

int change(int k){

	int new_k = (k%10)*100 + ((k%100)/10)*10 + k/100;
	
	return new_k;
}
