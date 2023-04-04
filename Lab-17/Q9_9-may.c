//Q9
#include<stdio.h>
int main(){
	char a[100]={0};
	printf("Enter string conatining 3 words: ");
	scanf("%[^\n]s",a);
	int b[2],z=0,count=0;
	for(int i=0;a[i]!='\0';i++){
		if(a[i]==' '){
			b[z]=i;
			z++;
		}
		count++;
	}
	int x=b[0],y=b[1];
	printf("Required string is:\n");
	for(int i=0;i<=(x-1)/2;i++){
		char temp=a[i];
		a[i]=a[x-1-i];
		a[x-1-i]=temp;
	}
	for(int i=0;i<(y-x)/2;i++){
		char temp=a[x+i];
		a[x+i]=a[y-i];
		a[y-i]=temp;	
	}
	count--;
	for(int i=0;i<(count-y+1)/2;i++){
		char temp=a[y+1+i];
		a[y+1+i]=a[count-i];
		a[count-i]=temp;
	}
	for(int i=0;i<=count;i++){
		printf("%c",a[i]);
	}
	return 0;
}