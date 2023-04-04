//Q7 Write the following sequence using recrusive function
#include<stdio.h>
int fib(int n){
	if(n==1 || n==0){
		return 1;
	}
	return fib(n-1)+fib(n-2);
}
void series(int a,int b,int n){
	static int i=0,coff_b=1;
	if(i==n){
		return;
	}
	int coff_a=fib(i);
	int sum=coff_a*a+coff_b*b;
	printf("%d ",sum);
	i++;
	coff_b=coff_a+coff_b;
	series(a,b,n);
}
int main(){
	int m,n;
	printf("Enter any 2 numbers: ");
	scanf("%d %d",&m,&n);
	int terms;
	printf("Enter number of terms: ");
	scanf("%d",&terms);
	printf("Series of the given numbers upto %d terms is: ",terms);
	series(m,n,terms);
	return 0;
}