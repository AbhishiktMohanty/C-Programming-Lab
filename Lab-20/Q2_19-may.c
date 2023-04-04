//Q2 Write a recrusive function to display the numbers upto given number
#include<stdio.h>
void display(int n){
	if(n==0){
		return;
	}
	display(n-1);
	printf("%d ",n);
}
int main(){
	printf("Enter a number: ");
	int a;
	scanf("%d",&a);
  printf("The required numbers are:\n");
	display(a);
	return 0;
}