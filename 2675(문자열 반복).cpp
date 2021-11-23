#include <iostream>
#include <string> //length함수 사용! 잊지 말고 추가 
using namespace std;

/*문제
	문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오.
	즉, 첫 번째 문자를 R번 반복하고, 두 번째 문자를 R번 반복하는 식으로 P를 만들면 된다.
	S에는 QR Code "alphanumeric" 문자만 들어있다.
	
	QR Code "alphanumeric" 문자는 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: 이다. 
	
입력 
	첫째 줄에 테스트 케이스의 개수 T(1 ≤ T ≤ 1,000)가 주어진다.
	각 테스트 케이스는 반복 횟수 R(1 ≤ R ≤ 8), 문자열 S가 공백으로 구분되어 주어진다.
	S의 길이는 적어도 1이며, 20글자를 넘지 않는다.
	*/
	
int main(void){
	int T, R; //테스트 케이스의 개수와 반복할 횟수 
	
	//char S[20];
	string S; 
	
	cin >> T;
	
	for(int i=0; i<T; i++){ //각 테스트 케이스니까 테스트 케이스 별로 R, S를 받아야 함. 
		cin>>R>>S;
		
		for(int j=0; j<S.length();j++){ //전체 S를 한 글자씩 돌 건데 
			for(int k=0; k<R; k++) //각 글자별로 
				{ cout << S[j]; } //반복 출력 
		}
		cout<<endl; //다 반복했으면 다음줄로 넘어가고 처음 for문 돌아가서 그 다음 케이스 실행. 
	}

} 
