//Q5 Find whether a no. is prime or not

#include<stdio.h>
#include<fcntl.h>
int main(){
	int n,i=2,b=0;
	printf("Enter the number to check it is prime or not: ");
	scanf("%d",&n);
	while(i<n && b==0){
		if(n%i==0){
			b+=1;
			break;
		}
		i+=1;
	}
	if(b==0){
		printf("%d is a prime number\n",n);
	}else{
		printf("%d is not a prime number\n",n);
	}
	return 0;
}