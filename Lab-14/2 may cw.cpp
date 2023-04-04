//Q1

#include <stdio.h>
int main(){
    int i,j,rows,columns;
    printf("Enter no. of rows : ");
	scanf("%d",&rows);
	printf("\nEnter no. of columns : ");
	scanf("%d",&columns);
	printf("Enter the Array :\n");
    int arr[rows][columns];
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            scanf("%d",&arr[i][j]);
    }
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            printf("%d \t",arr[i][j]);
        printf("\n");
    }
    int sr,sc;
    for(i=0;i<rows;i++){
        sr=0;
        for(j=0;j<columns;j++){
            sr=sr+arr[i][j];
        }
        printf("Sum of elements of row %d = %d \n",i,sr);
    }
    for(i=0;i<columns;i++){
        sc=0;
        for(j=0;j<rows;j++){
            sc=sc+arr[j][i];
        }
        printf("Sum of elements of column %d = %d \n",i,sc);
    }
    return 0;
}



/*
#include<stdio.h>

int main(){
	int arr= 2
	for(int c=0;c>=0;c++){
		for(r=3;r>=0;r--){
			printf("%d", &arr[r][c]);
		}
	}
}*/
