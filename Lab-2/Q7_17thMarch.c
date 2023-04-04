/*Take a 5 digit number and compute the following
             21943
             43921
*/
#include <stdio.h>

int main()
{
    printf("Enter a 5 digit number:\n");
    int a,s;s=0;
    scanf("%d",&a);
    int n1=a%100;
    s=s+n1;
    a=a/100;
    int n2=a%10;
    s=(s*10)+n2;
    a=a/10;
    int n3=a%100;
    s=(s*100)+n3;
    printf("%d",s);
    

    return 0;
}
