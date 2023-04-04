//Q7
#include<stdio.h>
int main(){
	char a[100]={0};
	printf("Enter a name having 3 words: ");
	scanf("%[^\n]s",a);
	int b[2],z=0;
	for(int i=0;a[i]!='\0';i++){
		if(a[i]==' '){
			b[z]=i;
			z++;
		}
	}
	printf("Position of spaces are %d and %d",b[0],b[1]);
	return 0;
}