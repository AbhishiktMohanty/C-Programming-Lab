//Q1
#include<stdio.h>
int main(){
	int n,m;
	printf("Enter number of rows : ");
	scanf("%d",&n);
	printf("Enter number of column : ");
	scanf("%d",&m);
  printf("Enter the array :\n");
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe array is:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sum+=a[i][j];
		}
		printf("\nThe sum of %d row is %d",i,sum);
		sum=0;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sum+=a[j][i];
		}
		printf("\nThe sum of %d column is %d",i,sum);
		sum=0;
	}
	return 0;
}