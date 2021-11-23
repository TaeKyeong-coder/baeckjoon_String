#include<iostream>
#include<string>
using namespace std;

int main(void){
	string s;
	int alphabet[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6 ,6, 7, 7,7,8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
	int time =0;
	
	cin >> s;
	
	for(int i=0; i<s.length(); i++){
		time = time + alphabet[s[i]-'A'];
	}
	
	cout << time;
	
}
