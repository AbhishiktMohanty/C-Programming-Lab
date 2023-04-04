//Q1 Input a array and print in forward and backward direction

#include<stdio.h>
int main(){
	int a[5];
	printf("Enter an array of 5 elements:\n");
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
  printf("The array in forward direction :\n");
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\nThe array in backward direction :\n");
	for(int i=4;i>=0;i--){
		printf("%d ",a[i]);
	}
	return 0;
}