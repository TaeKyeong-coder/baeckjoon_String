#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv) {
    
    string str; 
    int cnt=0;
    
    cout<<"���ڿ��� �Է��Ͻÿ�? ";
    getline(cin,str);
    
    cout<<"�Է��� ���� : "<<str<<endl;; 
    cout<<"���ڿ� ���� : "<<str.length()<<endl;
    for(int i=0;i<str.length();i++){
        if(str[i]==' ') cnt++;
    }
    cout<<"���鹮�� ���� : "<<cnt<<endl;
    cout<<"���ĺ� ���� = ���ڿ����� - ���鹮�� ���� = "<<str.length()-cnt<<endl;
    
    
    return 0;
}
