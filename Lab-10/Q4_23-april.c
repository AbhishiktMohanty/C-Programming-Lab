//Q4 Display the given Format

#include<stdio.h>

int main()
{
	int a=2,b=4,c=3,d,i=1;
	printf("The First number is 2 \n");
	printf("The Second number is 4\n");
	printf("Upto 5 sums\n");
	
	printf("\nThe required Format is : \n");
	
	printf("1/%d! + 1/%d!  ",a,b);
    mn:
    i++;
    d=a+b;
    if(d<16){
    	printf("1/%d! + ",d);
		}
    else{
    	printf("1/%d!\n",d);
	}
    
    a=b;
    b=d;
    
    if(i<=c)
    goto mn;

    return 0;	
}