//Q4
#include<stdio.h>
 int main ()
 {
    int num,m,k,c=0,flag=0,d=1;
    printf("Enter number of elements: ");
    scanf("%d",&num);
    if(num%2==0){
    	m=num/2;
	}else{
		m=(num+1)/2;
	}
	m-=1;
    int array[num];
    printf("Enter a number: ");
    scanf("%d",&k);
    for(int i=1;i<=num;i++)
    {
        if(flag==0){
        	array[m-c]=k;
        	flag=1;
        	c++;
		}else{
			array[m+d]=k;
			flag=0;
			d++;
		}
		k=k-i;
    }
    printf("The array after rearranging: \n");
    for(int i=0;i<num;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
 }