//Q3 Pass a two dimensional array to a function and display the whole array in side the function
#include<stdio.h>
void display(int r,int b[][4]){
	for(int i=0;i<r;i++){
		for(int j=0;j<4;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return;
}
int main(){
	int row,col;
	printf("Enter number of rows: ");
	scanf("%d",&row);
	col=4;
	int a[row][4];
	printf("Enter an array of %d x %d inputs:\n",row,col);
	for(int i=0;i<row;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("The array is:\n");
	display(row,a);
	return 0;
}