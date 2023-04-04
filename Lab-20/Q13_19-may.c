//Q13 WRF for finding the summation of an integer array
#include<stdio.h>
int summation(int a[],int len,int sum){
	if(len==-1){
		return sum;
	}
	sum+=a[len];
	summation(a,len-1,sum);
}
int main(){
	int n;
	printf("Enter the length of the array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int sum=0;
	sum=summation(a,n-1,sum);
	printf("Sum of all elements is: %d",sum);
	return 0;
}