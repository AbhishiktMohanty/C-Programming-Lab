//Q3 The 2nd largest and 3rd largest number among 4 number
#include<stdio.h>

int main(){
  int a,b,c,d;
  printf("Enter the 1st number: ",a);
	scanf("%d",&a);
	printf("Enter the 2nd number: ",b);
	scanf("%d",&b);
	printf("Enter the 3rd number: ",c);
	scanf("%d",&c);
	printf("Enter the 4th number: ",d);
	scanf("%d",&d);
    //2nd largest number
    //for a
    if(a>b && a>c && a<d){
        printf("The 2nd largest number is %d. \n", a);
    }
    if(a>b && a<c && a>d){
        printf("The 2nd largest number is %d. \n", a);
    }
    if(a<b && a>c && a>d){
        printf("The 2nd largest number is %d. \n", a);
    }
    //for b
    if(b>a && b>c && b<d){
        printf("The 2nd largest number is %d. \n", b);
    }
    if(b>a && b<c && b>d){
        printf("The 2nd largest number is %d. \n", b);
    }
    if(b<a && b>c && b>d){
        printf("The 2nd largest number is %d. \n", b);
    }

    //for c
    if(c>a && c>b && c<d){
        printf("The 2nd largest number is %d. \n", c);
    }
    if(c>a && c<b && c>d){
        printf("The 2nd largest number is %d. \n", c);
    }
    if(c<a && c>b && c>d){
        printf("The 2nd largest number is %d. \n", c);
    }

    //for d
    if(d>a && d>b && d<c){
        printf("The 2nd largest number is %d. \n", d);
    }
    if(d>a && d<b && d>c){
        printf("The 2nd largest number is %d. \n", d);
    }
    if(d<a && d>b && d>c){
        printf("The 2nd largest number is %d. \n", d);
    }

    //for 3rd largest number

    //for a
    if(a>b && a<c && a<d){
        printf("The 3rd largest number is %d.\n", a);
    }
    if(a<b && a<c && a>d){
        printf("The 3rd largest number is %d.\n", a);
    }
    if(a<b && a>c && a<d){
        printf("The 3rd largest number is %d.\n", a);
    }

    //for b
    if(b>a && b<c && b<d){
        printf("The 3rd largest number is %d.\n", b);
    }
    if(b>c && b<a && b<d){
        printf("The 3rd largest number is %d.\n", b);
    }
    if(b>d && b<a && b<c){
        printf("The 3rd largest number is %d.\n", b);
    }

    //for c
    if(c>a && c<b && c<d){
        printf("The 3rd largest number is %d.\n", c);
    }
    if(c>b && c<a && c<d){
        printf("The 3rd largest number is %d.\n", c);
    }
    if(c>d && c<a && c<b){
        printf("The 3rd largest number is %d.\n", c);
    }
    
    //for d
    if(d>a && d<b && d<c){
        printf("The 3rd largest number is %d.\n", d);
    }
    if(d>b && d<a && d<c){
        printf("The 3rd largest number is %d.\n", d);
    }
    if(d>c && d<a && d<b){
        printf("The 3rd largest number is %d.\n", d);
    }
    return 0;
}