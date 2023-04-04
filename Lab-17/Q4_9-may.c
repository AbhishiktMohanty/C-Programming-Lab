//Q4
#include<stdio.h>
int main(){
	char a[100]={0};
	printf("Enter a string: ");
	scanf("%[^\n]s",a);
	int z=0;
	while(a[z]!='\0'){
		z++;
	}
	char b[z+1];
	for(int j=0;j<=z;j++){
		b[j]=a[j];
	}
	printf("%s",b);
	return 0;
}