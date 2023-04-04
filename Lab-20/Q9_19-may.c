//Q9 WRF for the summation
#include<stdio.h>
int summation(int x,int y,int sum){
	if(x==y){
		sum+=y;
		return sum;
	}
	sum+=x;
	summation(x+1,y,sum);
}
int main(){
	int n,m,sum=0;
	printf("Enter two numbers between whom you want to find the summation: ");
	scanf("%d %d",&n,&m);
	sum=summation(n,m,sum);
	printf("The summation is: %d",sum);
	return 0;
}