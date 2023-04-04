//Q9 Display the binary value of ascci decimal

#include<stdio.h>
int main(){
	int n,i=0;
	printf("Enter the number whose binary form you want to know:\n");
	scanf("%d",&n);
	int a[16];
	while(n!=0){
		int c=n%2;
		a[i]=c;
		n=n/2;
		i++;
	}
	printf("Binary form of the number is:\n");
	for(int j=i-1;j>=0;j--){
		printf("%d",a[j]);
	}
	return 0;
}