#include<iostream>
#include<string>
using namespace std;

int main(void){
	int N, cnt = 0; //N�� �������� �־��� �Է¹��� �� �ִ� �ܾ� ��
	int j; //j�� loop������ ����� �ǵ� �������� ����� �� �� �� ����� �ʿ䰡 �־ ���������� 
	int arr[26]; //���ĺ� 26�� 
	string str; //�Է¹��� �ܾ� 
	cin >> N; 
	
	for(int i=0; i<N; i++){
		cin >> str;
		//int arr[5]; fill_n(arr,5,1);
		//fill_n(�����Ϸ��� ������ ���� �����ּ�, �����Ϸ��� ���� ����, ���� ��)
		//�迭�� 2��° ���Һ��� �����Ϸ���? fill_n(arr+1, 4, 1) 
		fill_n(arr,26,0);
		
		arr[str[0]-97] = 1; //�ҹ��� a�� 97 => �� ��° �ҹ������� check�ؼ� 1�� �ٲ�д�. 
		for(j = 1; j<str.length();j++){
			if(str[j-1] != str[j]){
				int idx = str[j] - 97;
				if(arr[idx] == 0){
					arr[idx]++;
				}
				else break;
			}
		}
		if(j == str.length()){ //j�� str�� ���̰� ���ٴ� �� ���� for������ �ܾ� ���ڸ� ���� Ž���ߴٴ� ���� 
			cnt++;
		}
	}
	cout<<cnt;
}
