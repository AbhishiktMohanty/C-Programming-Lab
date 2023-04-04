//Q4 Take two foats values and interchange these two values in following way
#include<stdio.h>
union data{
	float no;
	char t[3];
};
int main(){
	union data d1,d2;
	printf("Enter a float number: ");
	scanf("%f",&d1.no);
	printf("Enter another float number: ");
	scanf("%f",&d2.no);
	char c=d1.t[1];
	d1.t[1]=d2.t[2];
	d2.t[2]=c;
	char d=d1.t[2];
	d1.t[2]=d2.t[1];
	d2.t[1]=d;
	printf("Below displayed values are interchange:\n");
	printf("%f <--> %f",d1.no,d2.no);
	return 0;
}