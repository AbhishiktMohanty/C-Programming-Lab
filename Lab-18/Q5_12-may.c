//Q5
#include <stdio.h>
int fibonacci(int a)
{   
    int y=1,c=0,t=0;
    for(int i=1;i<=a;i++)
    {   
        printf("%d  ",y);
        t=y;
        y=c;
        c=t;
        y=c+y;
    }
    return 0;
}
    int main ()
{ 
    int term;
    printf("Enter number of terms to be printed- ");
    scanf("%d",&term);
    fibonacci(term);
    return 0;
}