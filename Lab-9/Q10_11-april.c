//Q10
#include<stdio.h>
int main(){
	int n=5;
	for (int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i==n){
				printf("*");
			}else if(j==1 ||j==i){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}