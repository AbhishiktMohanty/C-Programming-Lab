//Q8
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
	int x=b[0],y=b[1];
	printf("\nMiddle word of the name is:\n");
	for(int i=x+1;i<y;i++){
		printf("%c",a[i]);
	}
	return 0;
}