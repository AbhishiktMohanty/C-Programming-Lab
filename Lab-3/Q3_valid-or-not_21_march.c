//Q3 Find weather the given no. is valid or not
#include<stdio.h>

int main(){
	int n;
	int temp;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	temp = n;
	
	int dig1 = n%10;
	n = n/10;
	
	int num = n%100;
	n = n/100;
	
	int sqr = num*num;
	int rem = sqr%10;
	
	sqr = sqr/10;
	
	int new1 = (sqr*1000)+((10*num)+rem);
	int new2 = (rem*1000)+((10*num)+sqr);
	
	(temp==new1 || temp==new2)? printf("It is a valid number."):printf("It is not a valid number");
	return 0;
}
