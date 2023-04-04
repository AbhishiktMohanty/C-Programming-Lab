//Q12
#include<stdio.h>
int main(){
	int n=3;
	for(int i=1;i<=n;i++){
		int a=n-i;
		for(int j=a;j>=1;j--){
			printf(" ");
		}
		for(int j=a+1;j<=n;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=n-1;i>=1;i--){
		int b=n-i;
		for(int j=1;j<=b;j++){
			printf(" ");
		}
		for(int j=b+1;j<=n;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}