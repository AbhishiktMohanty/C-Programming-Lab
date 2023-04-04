//Q7
#include <stdio.h>
int factorial(int a)
{   
    int fact=1;
    for(int i=1;i<=a;i++)
        {
        fact=fact*i;
        }
        printf("%d",fact);
    return 0;
}
    int main()
    {  
        int num;
        printf("Enter the number whose factorial is to be printed: ");
        scanf("%d",&num);
        printf("The factorial is of %d is: ",num);
        factorial(num);
    }