//Take a 5 digit number and display its middle 3 digit
#include <stdio.h>

int main()
{
    printf("Enter a 5 digit number:\n");
    int a,s;s=0;
    scanf("%d",&a);
    a=a/10;
    int c=a%10;
    s=s+c;
    a=a/10;
    int c1=a%10;
    s=(c1*10)+s;
    a=a/10;
    int c2=a%10;
    s=(c2*100)+s;
    printf("%d",s);
    
    

    return 0;
}
