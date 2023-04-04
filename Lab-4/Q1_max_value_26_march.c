//Q1 Maximum value among 3 number
#include<stdio.h>
int main (){
	int a,b,c;
	printf("Enter 1st number: ",a);
	scanf("%d",&a);
	printf("Enter 2nd number: ",b);
	scanf("%d",&b);
	printf("Enter 3rd number: ",c);
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is the maximum value among the three numbers",a);
		}
		else
		{
			printf("%d is the maximum value among the three numbers",c);
		}
	}
	else
    {
    	if(b>c)
    	{
    		printf("%d is the maximum value among the three numbers",b);
		}
		else
		{
			printf("%d is the maximum value among the three numbers",c);
		}
    }
	return 0;
}