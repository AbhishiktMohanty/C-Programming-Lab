/*#include<stdio.h>

int main(){
	printf("Enter the pointer : ");
	scanf("%p", &*a);
	printf("%p",*a);
	return 0;
}
*/
//recieve the value from keyboard and also display it
/*
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a value : ");
    scanf("%d",&a);
    int *p;
    p = &a;
    printf("p = %u\n", p);
    
    return 0;
}
*/
/*
//Q1 
#include<stdio.h>
int main(){
	int a;
	char b;
	float c;
	int *d=&a;
	char *e=&b;
	float *g=&c;
	printf("Enter a character:\n");
	scanf("%c",e);
	printf("Enter a number:\n");
	scanf("%d",d);
	printf("Enter a float number:\n");
	scanf("%f",g);
	printf("Displaying the values\n");
	printf("Interger= %d,\nCharecter= %c,\nFloat= %f",*d,*e,*g);
	return 0;
}
*/
/*
//Q2 Interchange values using pointers
#include<stdio.h>
int main(){
	int a,b;
	int *c=&a;
	int *d=&b;
	printf("Enter the first number a=");
	scanf("%d",c);
	printf("Enter the second number b=");
	scanf("%d",d);
	printf("The values after interchange:\n");
	printf("a=%d\nb=%d",*d,*c);
	return 0;
}
*/
/*
//Q3
#include<stdio.h>
int main(){
	int n;
	printf("Enter no. of elments of array you want : ");
	scanf("%d",&n);
	int a[n];
	int *c=&a[0];
	printf("Enter the array : ");
	for(int i=0;i<n;i++){
		scanf("%d",c+i);
	}
	printf("\nPrinting the given array in forward direction:\n");
	for(int i=0;i<n;i++){
		printf("%d ",*(c+i));
	}
	printf("\nPrinting the given array in backward direction:\n");
	for(int i=n-1;i>=0;i--){
		printf("%d ",*(c+i));
	}
	return 0;
}
*/

//Q4
#include<stdio.h>
int main(){
	int n;
	printf("Enter number of elemnts in the array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements to be enlisted in the array\n");
	int *c=&a[0];
	for(int i=0;i<n;i++){
		scanf("%d",c+i);
	}
	int *d=&a[n-1];
	int b=n/2;
	for(int i=0;i<b;i++){
		int temp=*(c+i);
		(c+i)=(d-i);
		*(d-i)=temp;
	}
	printf("\nReversed array is:\n");
	for(int i=0;i<n;i++){
		printf("%d ",*(c+i));
	}
	return 0;
}
