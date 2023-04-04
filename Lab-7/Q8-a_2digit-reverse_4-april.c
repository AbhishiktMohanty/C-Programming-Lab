//Q8 (a)Find the reverse number in 2 digit places
#include<stdio.h>
int main ()
{   
    int num,b,c=1,i=1,sum=0,l=0;
    printf("Enter the number:- ");
    scanf("%d",&num);
    int a1=num;
    b=2;
    while(i<=b)
        {
        c=c*10;i=i+1;
        }
    i=1;
    while(a1>0)
    { 
      if(a1%c>(c/10))
        {
            l=a1%c; 
            sum=sum*c+l;
        }
    else
        {
            int u=a1,op=1;
            while(a1>0)
            {   
                op=op*10;a1=a1/10;
            }
            sum=sum*op+u;
            break;
        }
     a1=a1/c;
    }
    printf("Reverse number is:- %d\n",sum);
    return 0;
}