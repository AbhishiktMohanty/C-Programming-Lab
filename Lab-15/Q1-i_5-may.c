//Q1 (i)
#include<stdio.h>
int main(){
	int n,m;
	printf("Enter number of rows : ");
	scanf("%d",&n);
	printf("enter number of columns : ");
	scanf("%d",&m);
	int a[n][m];
	int b[n][m];
	printf("Enter the 1st matrix :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the 2nd matrix :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&b[i][j]);
		}
	}
	int num;
	printf("1.to add\n2.to substract\n");
	scanf("%d",&num);
	if(num==1){
		int c[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				c[i][j]=a[i][j]+b[i][j];
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}else if(num==2){
		int c[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				c[i][j]=a[i][j]-b[i][j];
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
