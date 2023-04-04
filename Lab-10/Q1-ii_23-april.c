//Q1 1 to n using goto
//ii) using do while 
#include<stdio.h>

int main()
{
	int i, n;

	printf("Enter the value of n: ");
	scanf("%d", &n);

	printf("Printing numbers from 1 to %d\n", n);

	i = 1;
	do
	{
		printf("%d ", i);
		i++;
	}while(i <= n);

	printf("\n");
}