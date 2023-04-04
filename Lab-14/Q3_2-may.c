//Q3
#include<stdio.h>
int main(){
	int n;
	printf("Enter an odd number : ");
	scanf("%d",&n);
	int x=n/2;
	int a[n][n];
	printf("Write the elements to be inserted in %dx%d square matrix:\n",n,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("/n");
	for(int i=0;i<x;i++){
		for(int j=x-i;j>=0;j--){
		printf(" ");
		}
		for(int q=n-1-i;q<n;q++){
			printf("%d ",a[i][q]);
		}
		printf("\n");
	 }
	for(int j=x;j<n;j++){
		for(int p=j-x;p>0;p--){
		printf(" ");
		}
		for(int q=j;q<n;q++){
			printf("%d ",a[j][q]);
		}
			printf("\n");
	}
	printf("\n\n");
	for(int i=0;i<=x;i++){
		for(int j=x-i;j<x;j++){
			printf(" ");
		}
		for(int j=i;j<n-i;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(int i=x;i<n;i++){
		for(int j=n-1-i;j>0;j--){
			printf(" ");
		}
		for(int j=n-i-1;j<=i;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}