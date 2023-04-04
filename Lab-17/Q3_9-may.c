//Q3
#include<stdio.h>
int main(){
	char a[100]={0};
	printf("Enter a string: ");
	scanf("%[^\n]s",a);
	for(int i=0;a[i]!='\0';i++){
		printf("%c",*(a+i));
	}
	printf("\nCharacters between p and z present in the string are:\n");
	for(int i=0;a[i]!='\0';i++){
		if(a[i]>'p'&& a[i]<'z'){
			printf("%c",*(a+i));
		}
	}
	return 0;
}