//Q6
#include<stdio.h>
int main(){
	char a[100]={0};
	printf("Enter a string: ");
	scanf("%[^\n]s",a);
	int z=0;
	for(int i=0;a[i]!='\0';i++){
		z++;
	}
	z--;
	if(z%2==0){
		for(int i=0;i<z/2;i++){
			int temp=a[i];
			a[i]=a[z-i];
			a[z-i]=temp;
		}
	}else{
		for(int i=0;i<(z-1)/2;i++){
			int temp=a[i];
			a[i]=a[z-i];
			a[z-i]=temp;
		}
	}
	printf("\nReverse of the above string is:\n");
	for(int j=0;j<=z;j++){
		printf("%c",*(a+j));
	}
	return 0;
}