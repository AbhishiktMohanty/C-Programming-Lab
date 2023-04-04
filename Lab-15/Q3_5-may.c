//Q3
#include<stdio.h>
int main(){
	int a[4][4];
	printf("Enter the array of 4 rows and 4 cols : \n");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int b[3][3],c[3][3];
	printf("\n1st 3x3 matrix is:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			b[i][j]=a[i][j];
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("2nd 3x3 matrix is:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			c[i][j]=a[i+1][j+1];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	long int d[3][3];
	printf("Resultant matrix is:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			d[i][j]=0;
			for(int k=0;k<3;k++){
				d[i][j]+=(b[i][k]*c[k][j]);
			}
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}