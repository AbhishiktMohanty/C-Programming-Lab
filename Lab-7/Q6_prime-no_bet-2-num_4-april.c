//Q6 Find all the prime number between 2 number.

#include<stdio.h>
#include<fcntl.h>
int main(){
	int a,b,i=2,n;
	printf("Enter the first number: ");
	scanf("%d",&a);
  printf("Enter the second number: ");
	scanf("%d",&b);
	n=a+1;
  printf("Prime number between %d and %d are : \n",a,b);
	while(n>a && n<b){
		int prm=0;
		while(i<n){
			if(n%i==0){
				prm+=1;
				break;
			}
			i+=1;
		}if(prm==0){
			printf("%d\n",n);
		}
		n+=1;
		i=2;
	}
	return 0;
}