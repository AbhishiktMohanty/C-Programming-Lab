//Q1 Write a fractorial function using recursive
#include<stdio.h>
int fac(int n){
	if(n==1 || n==0){
		return 1;	
	}
	return(n*fac(n-1));
}
int main(){
	int a;
	printf("Enter the number to find factorial: ");
	scanf("%d",&a);
	int f=fac(a);
	printf("Factorial of the given number is: %d",f);
	return 0;
}