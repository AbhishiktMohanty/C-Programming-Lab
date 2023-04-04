//Q4
#include<stdio.h>
int main(){
	int a[4][4];
	printf("Enter the elements to be inserted in 4x4 matrix : ");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int b[2][2];
	int count=0,z=0;
	for(int i=0,y=0;i<4,y<2;i+=2,y++){
		for(int j=0;j<2;j++){
			count=count+a[i][j+i]+a[i+1][j+i];
		}
		b[y][z]=count;
		z++;
		count=0;
		for(int j=2;j<4;j++){
			count=count+a[i][j+i]+a[i+1][j+i];
		}
		b[y][z]=count;
		count=0;
		z=0;
	}
	printf("Required 2x2 matrix is :\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}