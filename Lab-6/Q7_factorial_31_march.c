//Q7 Factorial of  a number

#include<stdio.h>

int main(){
	int n;
	printf("Enter a number to get the factorial of: ");
	scanf("%d", &n);
	int fact=1;
	int i=1;
	while(i<=n){
		fact = fact*i;
		i++;
	}
	printf("The factorial of %d is %d.\n", n,fact);
	return 0;
}