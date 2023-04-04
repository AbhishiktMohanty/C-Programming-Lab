//Q2 Find all the leaps years between 2 given years

#include<stdio.h>
#include<fcntl.h>
int main(){
	int a,b,i;
	printf("Enter the first year between which you want to find leap year: ");
	scanf("%d",&a);
  printf("Enter the second years between which you want to find leap year: ");
	scanf("%d",&b);
	i=a+1;
  printf("The leap years between the years are :\n");
	while(i>a && i<b){
		if(i%100==0){
			if(i%400==0){
				printf("%d\n",i);
			}
		}else{
			if(i%4==0){
				printf("%d\n",i);
			}
		}
		i+=1;
	}
	return 0;
}