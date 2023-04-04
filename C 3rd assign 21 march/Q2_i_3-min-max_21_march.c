//Q2 Find the max and min among the 3 no. , 4 no.s ,& 8 no.
//i) For 3 Number
#include<stdio.h>
int main(){
	int a,b,c,d,e;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("Enter 3rd number: ");
	scanf("%d",&c);
	
	d=(a<b)?((a<c)?a:c):((b<c)?b:c);
	printf("%d is the minimum value.\n", d);
	
	e=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("%d is the maximum value.\n", e);
	return 0;
}