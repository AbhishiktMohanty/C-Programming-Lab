//Q8 Summation in given format

#include<stdio.h>

int main(){
	int n;
	printf("Enter the terms upto which the summation should be calculated: ");
	scanf("%d", &n);
	int a=2;
	int fact=1;
	int i=1;
	float num;
	float sum=0;
	
	while(i<=n){
		fact = fact*a;
		num = 1.00/fact;
		sum = sum+num;
		a++;
		i++;
	}
	printf("The summation of the series is: %f\n", sum);
	return 0;
}