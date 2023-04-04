//Q8 WRF to display the multiplication table in reverse order
#include<stdio.h>
void table(int n,int b){
	if(b==10){
		int d=n*b;
		printf("%d x %d = %d\n",n,b,d);
		return;
	}
	int c=n*b;
	table(n,b+1);
	printf("%d x %d = %d\n",n,b,c);
	return;
}
int main(){
	int n,c=1;
	printf("Enter the number whose table you want to know: ");
	scanf("%d",&n);
	table(n,c);
	return 0;
}