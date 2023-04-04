//Q3 
#include <stdio.h>
int main()
{  
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int t=num;
    for(int i=1;i<=num;i=i+1)
        {   
        printf("%d %d ",i,t);
        t=t-1;
        }
    return 0;
}