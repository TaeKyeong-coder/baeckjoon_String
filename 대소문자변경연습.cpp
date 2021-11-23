#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string str = "Hello World";
	cout << "Origin : " << str << endl;
	
	for(int i = 0; i < str.size(); i++) {
		str[i] = tolower(str[i]);
		}
		
	cout << "ToLower : " << str << endl;

	for(int i = 0; i < str.size(); i++) {
		str[i] = toupper(str[i]);
	}

	cout << "ToUpper : " << str << endl;
return 0;
}

