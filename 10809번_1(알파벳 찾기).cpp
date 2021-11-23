#include<iostream>
#include<cstring> 
using namespace std;

int main(){
	int arr[26];
	char S[100];
	
	cin>> S;
	
	
	for(int i=0; i<26; i++){
		arr[i] = -1;
	}
	
	for(int i = 'a'; i<'z'; i++){
		for(int j = 0; j< strlen(S); j++){
			if(i==S[j]){
				arr[S[j]-'a'] = j;
				break;
			}
		}
	}

	for(int i=0; i<26; i++){
		cout<< arr[i];
		if(i<25) {
			cout << " ";
		}
	}
	return 0;
}
