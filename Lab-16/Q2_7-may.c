//Q2 Interchange values using pointers
#include<stdio.h>
int main(){
	int a,b;
	int *c=&a;
	int *d=&b;
	printf("Enter the first number a=");
	scanf("%d",c);
	printf("Enter the second number b=");
	scanf("%d",d);
	printf("The values after interchange:\n");
	printf("a=%d\nb=%d",*d,*c);
	return 0;
}