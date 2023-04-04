//Q6
#include <stdio.h>
int fibonacci(int a)
{   
    int term=1,c=0,t=0;
    for(int i=1;i<a;i++)
    {  
        t=term;
        term=c;
        c=t;
        term=c+term;
        
    }
    return term;
}
   int main()
    { 
        int term;
        printf("Enter the nth term to be found- ");
        scanf("%d",&term);
        int u=fibonacci(term);
        printf("The %dth term of fibonacci series is- %d ",term,u);
        return 0;
}