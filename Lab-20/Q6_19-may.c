//Q6 Write the nth fibonacci number
#include<stdio.h>
int fib(int n){
	if(n==1 || n==0){
		return 1;
	}
	return fib(n-1)+fib(n-2);
}
int main(){
	int a;
	printf("Enter the term of the fibionacci series you want to know: ");
	scanf("%d",&a);
	int num=fib(a);
	printf("The term is: %d",num);
	return 0;
}