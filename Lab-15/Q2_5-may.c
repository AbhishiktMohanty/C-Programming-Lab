//Q2
#include<stdio.h>
int main(){
	int n,x,count=1;
	printf("Enter a 2 to the power matrix : ");
	scanf("%d",&n);
	int a[n][n];
	x=n/2;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=count;
			count++;
		}
	}
	printf("\nOriginal matrix is :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nRequired matrix is:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<x && j<x){
				int temp=a[i][j];
				a[i][j]=a[i+x][j+x];
				a[i+x][j+x]=temp;
			}else if((j>=x && j<n) && i<x){
				int temp=a[i][j];
				a[i][j]=a[i+x][j-x];
				a[i+x][j-x]=temp;
			}
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
