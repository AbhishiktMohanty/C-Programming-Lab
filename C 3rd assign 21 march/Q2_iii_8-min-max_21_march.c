//Q2 Find the max and min among the 3 no. , 4 no.s ,& 8 no.
//iii) For 8 number
#include<stdio.h>
int main(){
  int a,b,c,d,e,f,g,h;
	printf("Enter 1st number:\n");
	scanf("%d",&a);
	printf("Enter 2nd number:\n");
	scanf("%d",&b);
	printf("Enter 3rd number:\n");
	scanf("%d",&c);
	printf("Enter 4th number:\n");
	scanf("%d",&d);
	printf("Enter 5th number:\n");
	scanf("%d",&e);
	printf("Enter 6th number:\n");
	scanf("%d",&f);
	printf("Enter 7th number:\n");
	scanf("%d",&g);
	printf("Enter 8th number:\n");
	scanf("%d",&h);

    int x1 = (a<b)?a:b;
    int x2 = (c<d)?c:d;
    int x3 = (e<f)?e:f;
    int x4 = (g<h)?g:h;
    int x5 = (x1<x2)?x1:x2;
    int x6 = (x3<x4)?x3:x4;
    int x7 = (x5<x6)?x5:x6;
    printf("%d is the minimum value.\n", x7);
  
    int y1 = (a>b)?a:b;
    int y2 = (c>d)?c:d;
    int y3 = (e>f)?e:f;
    int y4 = (g>h)?g:h;
    int y5 = (y1>y2)?y1:y2;
    int y6 = (y3>y4)?y3:y4;
    int y7 = (y5>y6)?y5:y6;
    printf("%d is the maximum value.\n", y7);
    return 0;
}