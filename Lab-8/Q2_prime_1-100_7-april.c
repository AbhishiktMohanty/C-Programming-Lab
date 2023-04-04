//Q2 Display all prime numbers between 1 to 100.
#include <stdio.h>
int main()
{
    printf("Prime numbers between 1 to 100 are:- \n");
    for(int num=1;num<=100;num++)
    {
        int f=0;
        for(int j=1;j<=num;j++)
        {
            if(num%j==0)
            f=f+1;
        }
        if(f==2)
        printf("%d ",num);
    }
    return 0;
}