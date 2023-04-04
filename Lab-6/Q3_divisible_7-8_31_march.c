//Q3 Display the number between two integer which are divisible by 7 and 8

#include<stdio.h>

int main(){
	int a,b;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the last number: ");
	scanf("%d", &b);
	int i=a;
	while(i<=b){
		if(i%7==0 && i%8==0){
			printf("The number which is divisible by 7 and 8 is/are : %d\n", i);
		}
		i++;
	}
	return 0;
}