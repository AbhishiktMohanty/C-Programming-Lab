//Q4 Interchange 3 number
#include<stdio.h>

int main(){
    int a,b,c;
    
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    printf("Enter the value of b: \n");
    scanf("%d", &b);
    printf("Enter the value of c: \n");
    scanf("%d", &c);
    printf("\n");
    
    printf("The value of a is: %d \n", a);
    printf("The value of b is: %d \n", b);
    printf("The value of c is: %d \n", c);
    printf("\n");
    
    c = a+c;
    a = c-a;
    c = c-a;
    
    c = b+c;
    b = c-b;
    c = c-b;
    
    printf("The new value of a is: %d \n", a);
    printf("The new value of b is: %d \n", b);
    printf("The new value of c is: %d \n", c);
    
    return 0;
}