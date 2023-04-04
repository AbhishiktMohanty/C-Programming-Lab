//Q2 Display the numbers in the given format "2 4 6 10 16"

#include<stdio.h>

int main()
{
	int a,b,c,d,i=1;
	printf("Enter the First number : ");
	scanf("%d", &a);
	printf("Enter the Second number : ");
	scanf("%d",&b);
	printf("Enter the limit : ");
	scanf("%d",&c);
	
	printf("%d  %d  ",a,b);
    mn:
    i++;
    d=a+b;
    printf("%d  ",d);
    a=b;
    b=d;
    
    if(i<=c)
    goto mn;

    return 0;	
}