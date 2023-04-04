/*Q1 Create an array of 5 size array and fill the array with with user input and display the array both in forward and backward direction 

Q2 take a variable size array and reverse it

Q3
*/




//Q1
#include<stdio.h>

int main(){
	int arr[5];
	printf("Enter the numbers:\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	printf("Original array: \n");
	for(int i=0;i<5;i++)
	printf("%d \n",&arr[i]);
	printf("Array in reverse: \n");
	for(int j=4;j>=0;j--)
	printf("%d\n", &arr[j]);
	
	return 0;
}

//Q5
#include<stdio.h>

int main(){
	int arr[a];
	printf("Enter a array: ");
	scanf("%d",&arr[a]);
	for(a)
}
