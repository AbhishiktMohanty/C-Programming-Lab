//Q1 (ii)
#include<stdio.h>
int main(){
	int n,m;
	printf("Enter number of rows : ");
	scanf("%d",&n);
	printf("Enter number of columns : ");
	scanf("%d",&m);
	int a[n][m];
	int b[n][m];
	printf("Enter the matrix :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<m;j++){
			int temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	}
	printf("Transpose of the given matrix is :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}