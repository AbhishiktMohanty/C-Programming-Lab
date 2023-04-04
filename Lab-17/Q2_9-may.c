//Q2
#include<stdio.h>
int main(){
	char a[5]={'A','B','C','D','\0'};
	for(int i=0;i<5;i++){
		for(int j=i;j<5;j++){
			printf("%c ",a[j]);
		}
		printf("\n");
	}
	return 0;
}