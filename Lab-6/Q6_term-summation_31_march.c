//Q6 summation of terms in given format

#include<stdio.h>

int main(){
	int a=3, i=1, n;
	printf("Print the number of terms upto which the number should be printed: ");
	scanf("%d", &n);
	float num, sum=0, conv;
	while(i<=n){
		conv = a*1.00;
		num = (conv-2)/conv;
		sum = sum+num;
		a = a+4;
		i++;	
	}
	
	printf("The sum of the given series is %f.\n", sum);
	return 0;
}