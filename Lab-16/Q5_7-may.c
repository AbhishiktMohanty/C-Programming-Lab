//Q5
#include<stdio.h>
int main(){
	int n;
	printf("Enter the length of the array: ");
	scanf("%d",&n);
	int a[n];
	int *b=&a[0];
	printf("Enter the array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",(b+i));
	}
	for(int i=0;i<n/2;i+=2){
		int temp=*(b+i);
		*(b+i)=*(b+n-1-i);
		*(b+n-1-i)=temp;
	}
	for(int i=1;i<=n/2;i+=2){
		int temp=*(b+i);
		*(b+i)=*(b+n-1-i);
		*(b+n-1-i)=temp;
	}
	for(int i=0;i<n;i++){
		printf("%d ",*(b+i));
	}
	return 0;
}