//Q2 Take a variable size array and reverse it.

#include<stdio.h>
int main(){
	int a;
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&a);
	int b[a];
	printf("Enter an array of %d elements:\n",a);
	for(int i=0;i<a;i++){
		scanf("%d",&b[i]);
	}
	printf("Variable input array is:\n");
	for(int i=0;i<a;i++){
		printf("%d ",b[i]);
	}
	printf("\nReverse variable input is:\n");
	for(int i=a-1;i>=0;i--){
		printf("%d ",b[i]);
	}
	return 0;
}