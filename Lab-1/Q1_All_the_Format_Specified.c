//Q1 All The Format Specified
#include<stdio.h>

int main(){
    int a;
    long int b;
    long long int c;
    float d;
    char e;
    double f;
    
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    printf("Enter the value of b: \n");
    scanf("%ld", &b);
    printf("Enter the value of c: \n");
    scanf("%lld", &c);
    printf("Enter the value of d: \n");
    scanf("%f", &d);
    printf("Enter the value of e: \n");
    scanf("%s", &e);
    printf("Enter the value of f: \n");
    scanf("%lf", &f);
    
    printf("The value of a is: %d \n", a);
    printf("The value of b is: %ld \n", b);
    printf("The value of c is: %lld \n", c);
    printf("The value of d is: %f \n", d);
    printf("The value of e is: %c \n", e);
    printf("The value of f is: %lf \n", f);
    return 0;
}