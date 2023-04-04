//Q2 Find the max and min among the 3 no. , 4 no.s ,& 8 no.
//ii) For 4 Number
#include<stdio.h>
int main(){
	int a,b,c,d,e,f;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("Enter 3rd number: ");
	scanf("%d",&c);
	printf("Enter 4th number: ");
	scanf("%d",&d);
	
	e=a<b && a<c && a<d?a:(b<a && b<c && b<d?b:(c<a && c<b && c<d?c:d));
	printf("%d is the minimum value.\n", e);
	
	f=a>b && a>c && a<d?a: (b>a && b>c && b>d?b: (c>a && c>b && c>d?c:d));
	printf("%d is the maximum value.\n", f);
	
	return 0;
}