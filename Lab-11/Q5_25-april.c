//Q5
#include<stdio.h>
int main(){
	int a,n=1;
	printf("Enter a odd number: ");
	scanf("%d",&a);
	int b[a];
	printf("Enter an array of %d inputs:\n",a);
	for(int i=0;i<a;i++){
		scanf("%d",&b[i]);
	}
	int c=(a-1)/2;
	for(int i=0;i<c;i++){
		int temp=b[i];
		b[i]=b[c+1+i];
		b[c+1+i]=temp;
	}
	printf("Required array is:\n");
	for(int i=0;i<a;i++){
		printf("%d ",b[i]);
	}
	return 0;
}