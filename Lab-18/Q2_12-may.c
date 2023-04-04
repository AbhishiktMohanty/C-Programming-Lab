//Q2
#include<stdio.h>
int main(){
	char a[100];
	int start=0,end=0,len=0;
	printf("Enter a string with multiple spaces between the words: ");
	scanf("%[^\n]s",a);
	for(int i=0;a[i]!='\0';i++){
		
		if(a[i]==' ' && a[i-1]!=' '){
			end=i-1;
			for(int i=0;i<((end-start)+1)/2;i++){
				char temp=a[i+start];
				a[start+i]=a[end-i];
				a[end-i]=temp;
			}
		}
		if(a[i+1]!=' ' && a[i]==' '){
			start=i+1;
		}
		len++;
	}
	for(int i=0;i<(len-start+1)/2;i++){
		char temp=a[i+start];
		a[start+i]=a[len-i-1];
		a[len-i-1]=temp;
	}
	printf("Required string is:\n");
	for(int i=0;a[i]!='\0';i++){
		printf("%c",a[i]);
	}
	return 0;
}