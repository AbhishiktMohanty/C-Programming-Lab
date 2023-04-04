//Q4 Write a function which will take a float and return back the values present before decimal and offer decimal
#include<stdio.h>
float decimal(float x,int *z){
	int y=x/1;
	*z=y;
	float c=x-(1.0*y);
	return c;
}
int main(){
	float a;
	printf("Enter any decimal number: ");
	scanf("%f",&a);
	int real_part;
	float decimal_part=decimal(a,&real_part);
	printf("Real part is:%d\n",real_part);
	printf("Decimal part is:%f",decimal_part);
	return 0;
}