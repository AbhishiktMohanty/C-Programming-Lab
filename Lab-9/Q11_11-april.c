//Q11
#include<stdio.h>
int main(){
	int n=5;
	int a=n;
	int i=(n+1)/2;
	for(int j=1;j<=i;j++){
		for(int i=n;i<a;i++){
			printf(" ");
		}
		for(int y=1;y<=n;y++){
			printf("* ");
		}
		printf("\n");
		n=n-2;
	}
	return 0;
}