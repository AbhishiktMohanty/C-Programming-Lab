//Q12 WRF for n^m
#include<stdio.h>
int pow(int *a,int *b,int *c){
	if(*b == 0){
		return *c;
	}
	*c = (*c) * (*a);
	(*b)--;
	pow(a,b,c);
}
int main(){
	int m,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Enter the power: ");
	scanf("%d",&m);
	int ans=1;
	ans=pow(&n,&m,&ans);
	printf("%d",ans);
	return 0;
}