//Q1
#include<stdio.h>
int main(){
	int a;
	char b;
	float c;
	int *d=&a;
	char *e=&b;
	float *g=&c;
	printf("Enter a character: ");
	scanf("%c",e);
	printf("Enter a number: ");
	scanf("%d",d);
	printf("Enter a float number: ");
	scanf("%f",g);
  printf("Displaying the values\n");
	printf("Interger= %d,\nCharecter= %c,\nFloat= %f",*d,*e,*g);
	return 0;
}