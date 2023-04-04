//Q4 WRF for returning the summation of all the digits of a number
#include<stdio.h>
int main(){
	int n,sum;
	printf("Enter the number: ");
	scanf("%d",&n);
	sum=summation(n);
	printf("The sum of the digits of the given number is: %d",sum);
	return 0;
}
int summation(int n1){
	if(n1==0){
		return 0;
	}
	int a=n1%10;
	return a+summation(n1/10);
}