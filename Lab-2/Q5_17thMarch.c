//Take a 3 digit number and display its reverse numbers
#include <stdio.h>

int main()
{
    printf("Enter a three digit number:\n");
    int a;
    int s=0;
    scanf("%d",&a);
    int n1=a%10;
    s=(s*10)+n1;
    a=a/10;
    int n2=a%10;
    s=(s*10)+n2;
    a=a/10;
    int n3=a%10;
    s=(s*10)+n3;
    printf("%d",s);

    return 0;
}