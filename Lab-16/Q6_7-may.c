//Q6
#include<stdio.h>
int main(){
	int n;
	printf("Enter even number of elements in an array: ");
	scanf("%d",&n);
  printf("Enter the elements of the array:\n");
	int a[n];
	int *b=&a[0];
	for(int i=0;i<n;i++){
		scanf("%d",b+i);
	}
	int d=n/2;
	int e=d/2;
	int *c=&a[d];
	for(int i=0;i<e;i++){
		int temp=*(b+i);
		*(b+i)=*(c-1-i);
		*(c-1-i)=temp;
	}
	for(int i=0;i<d;i++){
		int temp=*(b+i);
		*(b+i)=*(c+i);
		*(c+i)=temp;
	}
	printf("Required array is:\n");
	for(int i=0;i<n;i++){
		printf("%d ",*(b+i));
	}
	return 0;
}