//Q6
#include<stdio.h>
int main(){
	int n,sum=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements to be inserted in the array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++){
		sum+=a[j];
	}
	printf("Total sum is %d\n",sum);
	int diff=a[n-1];
	for(int i=n-2;i>=0;i--){
		diff-=a[i];
	}
	printf("Total differnce between the elemnts is %d",diff);
	return 0;
}
