//Q1
#include<stdio.h>
int main(){
	char a[100];
	int z=1;
	printf("Enter a string with multiple spaces between the words: ");
	scanf("%[^\n]s",a);
	for(int i=0;a[i]!='\0';i++){
		if(a[i]==' ' && a[i+1]!=' '){
			z+=1;
		}
	}
	printf("Number of words present in the string are %d",z);
	return 0;
}