//Q7
#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements to be inserted in the array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Original array is:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	if(n%2==0){
		for(int i=0;i<n;i+=2){
			int temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}else{
		for(int i=0;i<n-1;i+=2){
			int temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	printf("\nThe required array is:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
