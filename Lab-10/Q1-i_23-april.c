//Q1 1 to n using goto
//i) using goto 
#include <stdio.h>

int main()
{
	int counter=1;
	int n;
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	printf("Printing numbers from 1 to %d\n", n);
	START:
	printf("%d ",counter);
	counter++;
	
	if(counter<=n)
		goto START;
	
	return 0;
}