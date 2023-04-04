//Q10 WRF for display the string in reverse order
#include<stdio.h>
void display(char *a){
	if(*a=='\0'){
		return;
	}
	display(a+1);
	printf("%c",*a);
}
int main(){
	char str[100];
	printf("Enter a string: ");
	scanf("%[^\n]s",str);
	printf("Reverse of the given string is: ");
	display(str);
	return 0;
}