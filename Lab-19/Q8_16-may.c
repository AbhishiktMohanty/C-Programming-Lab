//Q8 Pass a string to an array which will replace multiple contineous places with only one space
#include<stdio.h>
void multiple(char *a){
	char b[100];
	int i=0,len=0;
	while(a[i]==' '){
		i++;
	}
	while(a[i]!='\0'){
		if(a[i]!=' '){
			b[len]=a[i];
			i++;
			len++;
		}
		else{
			b[len]=a[i];
			i++;
			len++;
			while(a[i]==' '){
				i++;
			}
		}
	}
	for(int j=0;j<len;j++){
		a[j]=b[j];
	}
	a[len]='\0';
}

int main(){
	char a[100];
	printf("Enter a string with multiple spaces between the words: ");
	scanf("%[^\n]s",a);
	multiple(a);
	printf("Required string is: ");
	for(int i=0;a[i]!='\0';i++){
		printf("%c",a[i]);
	}
	return 0;
}