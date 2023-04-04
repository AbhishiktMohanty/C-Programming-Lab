//Q1
#include<stdio.h>
int main(){
	char a[100]={0};
	printf("Enter your name: ");
	scanf("%[^\n]s",a);
	printf("%s",a);
	return 0;
}