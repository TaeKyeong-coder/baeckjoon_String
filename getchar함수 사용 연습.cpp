#include <iostream>
using namespace std;

int main(void) {
    char ss1;
    
	getchar();
    getchar();
    
    ss1 = getchar();
    
	printf("%c", ss1);
    while (getchar() != '\n') {}
    
    //
    printf("\n");
    //
    
    char s1, s2, s3;
    
    s1=getchar();
    while (getchar() != '\n') {}
    
	s2=getchar();
    while (getchar() != '\n') {}
    
	s3 = getchar();
    while (getchar() != '\n') {}
    
	printf("Ãâ·Â:%c %c %c", s1,s2,s3);
}
