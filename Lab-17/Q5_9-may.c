//Q5
#include<stdio.h>
int main(){
	char a[100]={0};
	printf("Enter a string: ");
	scanf("%[^\n]s",a);
	int z=0;
	for(int i=0;a[i]!='\0';i++){
		z++;
	}
	z++;
	printf("Position of \\0 is %d",z);
	return 0;
}
