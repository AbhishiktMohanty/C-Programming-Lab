//Q9
#include<stdio.h>
int f1(int a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=i;j<a;j++)
            {    
                printf("* ");
            }
        printf("\n");
    }
    return 0;
}
int main()
{   int lim;
    printf("Enter the limit: ");
    scanf("%d",&lim);
    f1(lim);
    return 0;
}