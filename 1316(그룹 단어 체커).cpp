#include<iostream>
#include<string>
using namespace std;

int main(void){
	int N, cnt = 0; //N은 문제에서 주어진 입력받을 수 있는 단어 수
	int j; //j는 loop문에서 사용할 건데 루프문을 벗어나고도 또 한 번 사용할 필요가 있어서 전역변수로 
	int arr[26]; //알파벳 26개 
	string str; //입력받을 단어 
	cin >> N; 
	
	for(int i=0; i<N; i++){
		cin >> str;
		//int arr[5]; fill_n(arr,5,1);
		//fill_n(변경하려는 원소의 범위 시작주소, 변경하려는 원소 갯수, 변경 값)
		//배열의 2번째 원소부터 변경하려면? fill_n(arr+1, 4, 1) 
		fill_n(arr,26,0);
		
		arr[str[0]-97] = 1; //소문자 a가 97 => 몇 번째 소문자인지 check해서 1로 바꿔둔다. 
		for(j = 1; j<str.length();j++){
			if(str[j-1] != str[j]){
				int idx = str[j] - 97;
				if(arr[idx] == 0){
					arr[idx]++;
				}
				else break;
			}
		}
		if(j == str.length()){ //j와 str의 길이가 같다는 건 위의 for문에서 단어 문자를 전부 탐색했다는 뜻임 
			cnt++;
		}
	}
	cout<<cnt;
}
