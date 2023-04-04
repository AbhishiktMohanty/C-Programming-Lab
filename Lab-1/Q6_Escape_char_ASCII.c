//Q6 Escape characters ASCII value
#include<stdio.h>

int main(){
    char a = '\t';
    char b = '\n';
    char c = '\v';
    char d = '\r';
    char f = '\b';
    
    printf("The ASCII value of \\t is %d \n", a);
    printf("The ASCII value of \\n is %d \n", b);
    printf("The ASCII value of \\v is %d \n", c);
    printf("The ASCII value of \\r is %d \n", d);
    printf("The ASCII value of \\b is %d \n", f);
    return 0;
}