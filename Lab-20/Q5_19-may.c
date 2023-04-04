//Q5 WRF for returning the reverse of a given number
#include<stdio.h>
int reverse(int n,int b){
	if(n==0){
		return b;
	}
	int a=n%10;
	b=b*10+a;
	reverse(n/10,b);
}
int  main(){
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	int rev=0;
	rev=reverse(a,rev);
	printf("Reverse of the number is: %d",rev);
	return 0;
}