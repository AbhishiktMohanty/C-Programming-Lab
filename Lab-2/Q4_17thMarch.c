//Take an 4 digit integer number and display its each digit  
#include <stdio.h>

int main()
{
    printf("Enter a four digit number:\n");
    int n;
    scanf("%d",&n);
    int a,b,c,d;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n;
    printf("%d\n%d\n%d\n%d\n",d,c,b,a);
    return 0;
}