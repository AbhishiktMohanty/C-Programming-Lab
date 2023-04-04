//Q6 Pass a string to an array and reverse it, the reversed string has to be displayed in the main.
#include<stdio.h>
char reverse(int len,char *a,char *b){
	if(len==-1){
		return *b;
	}
	*b=a[len];
	reverse(len-1,a,b+1);
}
int main(){
	char a[100];
	printf("Enter a string: ");
	scanf("%[^\n]s",a);
	char b[100];
	int length=0;
  printf("The reversed string is:\n");
	for(int i=0;a[i]!='\0';i++){
		length++;
	}
	length--;
	b[100]=reverse(length,a,b);
	for(int i=0;i<=length;i++){
		printf("%c",b[i]);
	}
	return 0;
}