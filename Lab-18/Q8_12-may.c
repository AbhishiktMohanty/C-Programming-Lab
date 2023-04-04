//Q8
#include<stdio.h>
int factorial(int x){
	int fac=1;
	for(int i=1;i<=x;i++){
		fac*=i;
	}
	return fac;
}
int fib(int n){
	int a=1,b=1,c;
	for(int i=1;i<n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return a;
}
void series(int n){
	int i=1,j=1;
	float sum=0.0;
	while(i<=n){
		sum+=(1.0*fib(i))/(1.0*factorial(j));
		printf("%d/%d!+ ",fib(i),j);
		j+=2;
		i++;
	}
	printf("=%f",sum);
}
int main(){
	int n;
	printf("Enter upto which term you want to know the sum: ");
	scanf("%d",&n);
	printf("The sum is:\n");
	series(n);
	return 0;
}