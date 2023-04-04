//Q7 Print the middle number of a given number.

#include<stdio.h>
#include<fcntl.h>
int main(){
	int n,i=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	int x=n;
	while(n!=0){
		i+=1;
		n=n/10;
	}
	int j=1;
	if(i%2==0){
		i=i/2;
		while(j!=i){
			x=x/10;
			j++;
		}
		int d=x%10;
		x=x/10;
		int e=x%10;
		printf("Middle number is %d%d",e,d);
	}else{
		i=(i+1)/2;
		while(j!=i){
			x=x/10;
			j+=1;
		}
		int d=x%10;
		printf("Middle number is %d",d);
	}
	return 0;
}