//Q3 Write a recursive function for displaying each digit of a no. both in forward and backward dirrection
#include<stdio.h>
void display(int n){
	if(n==0){
		printf("\nGiven number in forward direction is:\n");
		return;
	}
	int a=n%10;
	printf("%d",a);
	display(n/10);
	printf("%d",a);
	return;
}
int main(){
	int b;
	printf("Enter a number: ");
	scanf("%d",&b);
	printf("Number in backward direction is:\n");
	display(b);
	return 0;
}