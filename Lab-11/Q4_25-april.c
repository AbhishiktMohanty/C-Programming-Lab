//Q4
#include<stdio.h>
int main(){
	int n,m;
	printf("Enter the size of an array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the number whose sequence array you want:\n");
	scanf("%d",&m);
	for(int i=0;i<n;i++){
		a[i]=m-2*i;
	}
	printf("original array:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nReverse array:\n");
	for(int i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
	return 0;
}