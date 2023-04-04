//Q1
#include<stdio.h>
int main(){
	int n,c,b;
	printf("Enter number of elements of the array : ");
	scanf("%d",&n);
	printf("Enter an array of %d inputs :\n",n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	c=n-1;
	if(c%2==0){
		b=c/2;
		for(int i=0;i<b;i+=2){
			int temp=a[i];
			a[i]=a[c-i];
			a[c-i]=temp;
		}
		for(int i=1;i<b+1;i+=2){
			int temp=a[i];
			a[i]=a[c-i];
			a[c-i]=temp;	
		}
	}else{
		b=(c-1)/2;
		for(int i=0;i<b;i+=2){
			int temp=a[i];
			a[i]=a[c-i];
			a[c-i]=temp;
		}
		for(int i=1;i<b+1;i+=2){
			int temp=a[i];
			a[i]=a[c-i];
			a[c-i]=temp;
		}
	}
	printf("Required array is:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}