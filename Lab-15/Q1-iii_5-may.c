//Q1 (iii)
#include<stdio.h>
int main(){
	int n,m,o,p;
	printf("Enter number of rows for 1st matrix : ");
	scanf("%d",&n);
	printf("Enter number of columns for 1st matrix : ");
	scanf("%d",&m);
	int a[n][m];
	printf("Enter the 1st matrix :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter number of rows for 2nd matrix : ");
	scanf("%d",&o);
	printf("Enter number of columns for 2nd matrix : ");
	scanf("%d",&p);
	printf("Enter the 2nd matrix :\n");
	int b[o][p];
	for(int i=0;i<o;i++){
		for(int j=0;j<p;j++){
			scanf("%d",&b[i][j]);
		}
	}
	if(m!=o){
		printf("\nError");
	}else{
		int c[n][p];
		for(int i=0;i<n;i++){
			for(int j=0;j<p;j++){
				c[i][j]=0;
				for(int k=0;k<m;k++){
					c[i][j]+=a[i][k]*b[k][j];
				}
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}