//Q14
#include<stdio.h>
int main(){
	int n=5,a;
	a=n-1;
	int i=(n+1)/2;
	for(int j=1;j<=i;j++){
		for(int y=1;y<=a;y++){
			printf(" ");
		}
		for(int i=a+1;i<=n;i++){
			printf("* ");
		}
		printf("\n");
		a=a-2;
	}
	return 0;
}
