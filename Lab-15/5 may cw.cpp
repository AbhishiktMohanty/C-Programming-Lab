
/*
//Q1 i) Addition
#include <stdio.h>
int main(){
    int i,j,rows,columns;
    printf("Enter number of rows : ");
	scanf("%d",&rows);
	printf("Enter number of columns : ");
	scanf("%d",&columns);
    int arr1[rows][columns],arr2[rows][columns],sum[rows][columns];
    printf("Enter elements of first array : \n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            scanf("%d",&arr1[i][j]);
    }
    printf("Enter elements of second array : \n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            scanf("%d",&arr2[i][j]);
    }
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            sum[i][j]=arr1[i][j]+arr2[i][j];
    }
    printf("Sum of the two arrays = \n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            printf("%d \t",sum[i][j]);
        printf("\n");
    }
}


// Q1 ii)Subtraction
#include<stdio.h>

int main(){
	int i,j,rows,columns;
	printf("Enter the number of rows : ");
	scanf("%d", &rows);
	printf("Enter the number of columns : ");
	scanf("%d", &columns);
	int arr1[rows][columns], arr2[rows][columns], sum[rows][columns];
	printf("Enter elements of first array : \n");
	for(i=0; i<rows;i++){
		for(j=0;j<columns;j++)
		scanf("%d", &arr1[i][j]);
	}
	printf("Enter elements of second array : \n");
	for(i=0;i<rows;i++){
		for(j=0;j<rows;j++)
		scanf("%d", &arr2[i][j]);
	}
	for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            sum[i][j]=arr1[i][j]-arr2[i][j];
    }
    printf("Sum after subtracting the two arrays = \n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            printf("%d \t",sum[i][j]);
        printf("\n");
    }
}
*/
/*
//Q1 iii) Transverse
#include<stdio.h>
int main(){
	int i,j,rows,columns;
	printf("Enter the number of rows : ");
	scanf("%d", &rows);
	printf("Enter the number of columns : ");
	scanf("%d", &columns);
	int arr[rows][columns], final[rows][columns];
	printf("Enter the elements of matrix : \n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++)
		scanf("%d", &arr[i][j]);
	}
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++)
		final[i][j]=arr[j][i];
	}
	printf("The transverse of the matrix is : \n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++)
		printf("%d \t", final[i][j]);
		printf("\n");
	}
}
*/

//Q1 iv) Multiplication
#include <stdio.h>
int main(){
    int i,j,rows1,columns1,rows2,columns2;
    printf("Enter no. of rows of first array : ");
	scanf("%d",&rows1);
	printf("Enter no. of columns of first array : ");
	scanf("%d",&columns1);
    printf("Enter no. of rows of second array : ");
	scanf("%d",&rows2);
	printf("Enter no. of columns of second array : ");
	scanf("%d",&columns2);
    if(columns1==rows2){
        int arr1[rows1][columns1],arr2[rows2][columns2],product[rows1][columns2];
        printf("Enter elements of first array : \n");
        for(i=0;i<rows1;i++){
            for(j=0;j<columns1;j++)
                scanf("%d",&arr1[i][j]);
        }
        printf("Enter elements of second array : \n");
        for(i=0;i<rows2;i++){
            for(j=0;j<columns2;j++)
                scanf("%d",&arr2[i][j]);
        }
        for(i=0;i<rows1;i++){
            for(j=0;j<columns2;j++){
                product[i][j]=0;
                for(int k=0;k<columns1;k++)
                    product[i][j]=product[i][j]+(arr1[i][k]*arr2[k][j]);
            }
        }
        printf("Product of the two arrays = \n");
        for(i=0;i<rows1;i++){
            for(j=0;j<columns2;j++)
            printf("%d \t",product[i][j]);
        printf("\n");
        }
    }
    else{
        printf("Invalid input");
    }
    return 0;
}
