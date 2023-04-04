//Q3
#include<stdio.h>
int main(){
	int n;
	printf("Enter no. of elments of array you want : ");
	scanf("%d",&n);
	int a[n];
	int *c=&a[0];
	printf("Enter the array : ");
	for(int i=0;i<n;i++){
		scanf("%d",c+i);
	}
	printf("\nPrinting the given array in forward direction:\n");
	for(int i=0;i<n;i++){
		printf("%d ",*(c+i));
	}
	printf("\nPrinting the given array in backward direction:\n");
	for(int i=n-1;i>=0;i--){
		printf("%d ",*(c+i));
	}
	return 0;
}