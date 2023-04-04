//Q4 Take an integer and round of upto 2 digit number
#include<stdio.h>

int main(){
  int a,b,c,d,e;
  printf("Enter a number: ",a);
	scanf("%d",&a);
	if(a%100>50){
		b= a/100;
		c= b*100+100;
		printf("%d is rounded upto %d\n",a,c);
	}
	else
	{	
		d=a/100;
		e=d*100;
		printf("%d is rounded upto %d\n",a,e);
	}
    return 0; 
}