//Q5 The sum of the series

#include<stdio.h>

int main(){
	int a=3, n;
	printf("Enter the term till which the summation should be printed: ");
	scanf("%d", &n);
	float num, sum=0;
	int i=1;
	while(i<=n){
		num = 1.00/a;
		sum += num;
		a = a+2;
		i++;
	}
	printf("The sum of the series will be: %f\n", sum);
	return 0;
}