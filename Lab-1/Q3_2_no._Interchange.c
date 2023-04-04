//Q3 2 No. Interchange

#include<stdio.h>

int main(){
    int a,b;
    
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    printf("Enter the value of b: \n");
    scanf("%d", &b);
    printf("\n");
    
    printf("The value of a is: %d \n", a);
    printf("The value of b is: %d \n", b);
    printf("\n");
    
    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("The value of a is: %d \n", a);
    printf("The value of b is: %d \n", b);
    return 0;
}