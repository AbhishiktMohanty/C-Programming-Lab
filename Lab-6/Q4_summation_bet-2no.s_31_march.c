//Q4 Find all the even number summation in between two integers

#include<stdio.h>

int main(){
	int a,b;
	int sum=0;
	printf("Enter the first numbers: ");
	scanf("%d",&a);
  printf("Enter the last numbers: ");
	scanf("%d",&b);
	int i=a;
	while(i<=b){
		if(i%2==0){
			sum += i;
		}
		i++;
	}
	printf("The summation of the even numbers between %d and %d is %d.\n", a,b,sum);
	return 0;
}