//Q10
#include<stdio.h>
int main(){
	char a[100];
	printf("Enter a string: ");
	scanf("%[^\n]s",a);
  printf("Required format of the string is:\n");
	int b[10],z=0;
	for(int i=0;a[i]!='\0';i++){
		if(a[i]==' '){
			b[z]=i+1;
			z++;
		}
		else if(a[i]>='A' && a[i]<='Z'){
			a[i]=a[i]+32;
		}
	}
	if(a[0]>'Z'){
		a[0]-=32;
	}
	z-=1;
	for(int i=0;i<=z;i++){
		a[b[i]]-=32;
	}
	for(int i=0;a[i]!=0;i++){
		printf("%c",a[i]);
	}
	return 0;
}