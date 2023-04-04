//Q3 Take input and print in required format

#include<stdio.h>
int main(){
	int a,n=1;
	printf("Enter an even number: ");
	scanf("%d",&a);
	int b[a];
	printf("Enter an array of %d elements:\n",a);
	for(int i=0;i<a;i++){
		scanf("%d",&b[i]);
	}
	int c=a/2;
	for(int i=1;i<(c-1);i++){
		int temp=b[i-1];
		b[i-1]=b[c-i];
		b[c-i]=temp;
	}
	for(int i=c+1;i<(a-1);i++){
		int temp=b[i-1];
		b[i-1]=b[a-n];
		b[a-n]=temp;
		n++;
	}
	printf("Required array is:\n");
	for(int i=0;i<a;i++){
		printf("%d ",b[i]);
	}
	return 0;
}