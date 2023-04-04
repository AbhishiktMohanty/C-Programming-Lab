//Q3 Find all the perfect sqare in  between 2 integers also find there submation

#include<stdio.h>
#include<fcntl.h>
#include<math.h>
int main(){
	int a,b,sum=0;
	printf("Enter the first number between which you want to find perfect squares and their summations : ");
	scanf("%d",&a);
  printf("Enter the second number between which you want to find perfect squares and their summations : ");
	scanf("%d",&b);
	int i=a+1;
  printf("The perfect sqaures between the two integers are : \n ");
	while(i>a && i<b){
		float c=pow(i,0.5);
		int x=c;
		int y=(c-x)*100;
		if(i%x==0 && y==0){
      
			printf("%d ",i);
			sum+=i;
		}
		i+=1;
	}printf("\n Summation of all the perfect square between two integers is %d\n",sum);
	return 0;
}