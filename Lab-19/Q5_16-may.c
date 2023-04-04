//Q5 Write a function which will take a 2 dimensional array and return back the sum of each rows
#include<stdio.h>
void sum_rows(int a[][4],int r,int col){
	int sum=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<col;j++){
			sum+=a[i][j];
		}
		int c=i+1;
		printf("Sum of all elements in row %d is:%d\n",c,sum);
		sum=0;
	}
	return;
}
int main(){
	int row;
	printf("Enter number of rows: ");
	scanf("%d",&row);
	int a[row][4];
	printf("Enter an array of %dx4 elements:\n",row);
	for(int i=0;i<row;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
	sum_rows(a,row,4);
	return 0;
}