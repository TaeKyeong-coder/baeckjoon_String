#include <iostream>
#include <string> //tolower함수 사용하기 위해서 
using namespace std;

/*문제
	알파벳 대소문자로 된 단어가 주어지면,
	이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오.
	단, 대문자와 소문자를 구분하지 않는다.
	
입력:
	첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다.
	주어지는 단어의 길이는 1,000,000을 넘지 않는다. 
	
출력:
	첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다.
	단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다. 
*/ 
int main(){
	string s;
    cin >> s;
    
    int max_s; //가장 많이 사용된 단어
	int max=0; //그 단어가 사용된 횟수
	int max_same=0; //출력된 횟수가 같은 게 존재하면(두 번째 출력 조건 때문에) 
	
	int alphabet[26] ={0, }; //이렇게 하면 for문으로 26개에 0안 넣어줘도 됨. 
    
    for(int i=0; i<s.length(); i++){ //받은 단어 전부 소문자로 바꿔줌 
    	s[i]=tolower(s[i]);
	}
	
    for(int i = 0; i < s.length(); i++){ //받은 단어 하나씩 갯수 카운트 
    	alphabet[s[i]-'a']++;  
	}
	
	for(int i=0; i<26; i++){
		if(max < alphabet[i]){ //더 많이 사용됐다면 
			max = alphabet[i]; //횟수 바꿔주고
			max_same = 0; 
			max_s = i;
		}
		
		else if (max==alphabet[i]){ //max값이 같은 게 있으면 
			max_same++;
		}
	}
	
	if(max_same>0){ //max갯수 같은 게 여러번 존재 하면 ?출력 
		cout << "?";
	}
	
	else{ //아니면 해당 알파벳 출력 
		cout<< (char)(max_s+'A'); //max_S는 숫자 상태니까 
	}
	
	return 0;
}
