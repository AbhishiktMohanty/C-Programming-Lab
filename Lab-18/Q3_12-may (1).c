//Q3
#include<stdio.h>
int main(){
	char a[100];
	printf("Enter a name of 3 words: ");
	scanf("%[^\n]s",a);
	int b[2];
	int z=0,y=0;
	for(int i=0;a[i]!='\0';i++){
		if(a[i]==' ' && a[i+1]!=' '){
			b[z]=i+1;
			z++;
		}else if(a[i]>='A' && a[i]<='Z'){
			a[i]+=32;
		}
		y++;
	}
	a[0]-=32;
	for(int j=0;j<z;j++){
		a[b[j]]-=32;
	}
	printf("1st part:\n");
	for(int i=0;a[i]!='\0';i++){
		printf("%c",a[i]);
	}
	int x=b[1];
	int c[y];
	for(int i=0;i<y;i++){
		c[i]=a[i];
	}
	for(int i=0;i<x;i++){
		if(c[i]>='a' && c[i]<='z'){
			c[i]=' ';
		}else if(c[i]>='A' && c[i]<='Z'){
			c[i+1]='.';
		}
	}
	printf("\n2nd part is:\n");
	for(int i=0;i<y;i++){
		printf("%c",c[i]);
	}
	int m=b[0];
	for(int i=0;i<m;i++){
		if(a[i]!=' ' && a[i]>='a'){
			a[i]-=32;
		}
	}
	for(int i=m;i<y;i++){
		if(a[i]>='a' && a[i]<='z'){
			a[i]=' ';
		}else if(a[i]>='A' && a[i]<='Z'){
			a[i]+=32;
			a[i+1]='.';
		}
	}
	printf("\nThe 3rd part is:\n");
	for(int i=0;a[i]!='\0';i++){
		printf("%c",a[i]);
	}
	return 0;
}