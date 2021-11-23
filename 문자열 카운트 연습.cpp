#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv) {
    
    string str; 
    int cnt=0;
    
    cout<<"문자열을 입력하시오? ";
    getline(cin,str);
    
    cout<<"입력한 문장 : "<<str<<endl;; 
    cout<<"문자열 길이 : "<<str.length()<<endl;
    for(int i=0;i<str.length();i++){
        if(str[i]==' ') cnt++;
    }
    cout<<"공백문자 개수 : "<<cnt<<endl;
    cout<<"알파벳 개수 = 문자열길이 - 공백문자 개수 = "<<str.length()-cnt<<endl;
    
    
    return 0;
}
