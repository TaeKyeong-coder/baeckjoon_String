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
			if(index == string::npos) //string::npos�� ã�� ������ ���� ��� ��ȯ
				break;
			
			//string�� ���Ͽ� string.replace(string.find(ã�� ��), ã�� ��.length(), ��ü�� ��);	
			//���� ���ڿ��� pos���� count���� ���ڵ��� ġȯ�ϱ� => (pos, count, str) 
			s.replace(index, arr[i].length(),"a");
		}
	}
	cout<<s.length();
}

