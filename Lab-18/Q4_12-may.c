//Q4
#include<stdio.h>
int pow(int x,int y){
	int sol=1;
	for(int i=1;i<=y;i++){
		sol*=x;
	}
	return sol;
}
int main(){
	int a,b;
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("Enter the power: ");
	scanf("%d",&b);
	int c=pow(a,b);
	printf("%d",c);
	return 0;
}