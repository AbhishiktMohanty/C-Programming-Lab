//Q4
#include<stdio.h>
int main(){
	int n;
	printf("Enter number of elemnts in the array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements to be enlisted in the array:\n");
	int *c=&a[0];
	for(int i=0;i<n;i++){
		scanf("%d",c+i);
	}
	int *d=&a[n-1];
	int b=n/2;
	for(int i=0;i<b;i++){
		int temp=*(c+i);
		*(c+i)=*(d-i);
		*(d-i)=temp;
	}
	printf("\nReversed array is:\n");
	for(int i=0;i<n;i++){
		printf("%d ",*(c+i));
	}
	return 0;
}