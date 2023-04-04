//Q2 Identify leap year
#include<stdio.h>
int main (){
	int a;
	printf("Enter the year : ",a);
	scanf("%d",&a);
	if(a%100==0)
	{
		if(a%400==0)
		{
			printf("%d is a leap year.\n",a);
		}
		else
		{
			printf("%d is not a leap year.\n",a);
		}
	}
	else
	{
		if(a%4==0)
		{
			printf("%d is a leap year.\n",a);
		}
		else
		{
			printf("%d is not a leap year.\n",a);
		}
	}
	return 0;
}