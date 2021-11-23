#include<iostream>
using namespace std;

int main(void){
	string s;
	cin >> s;
	
	int index;
	string arr[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="}; 
	
	for(int i=0; i<8; i++){
		while(1){
			index = (int)s.find(arr[i]);
			if(index == string::npos) //string::npos는 찾는 문쟈열이 없는 경우 반환
				break;
			
			//string에 대하여 string.replace(string.find(찾을 거), 찾을 거.length(), 교체할 거);	
			//기존 문자열의 pos부터 count개의 문자들을 치환하기 => (pos, count, str) 
			s.replace(index, arr[i].length(),"a");
		}
	}
	cout<<s.length();
}

