//Q9 
#include<stdio.h>
int main(){
	int n=5,count=1;
	for (int i=1;i<=n;i++){
		if(i%2==0){
			int a=(n-i);
			count+=a;
			for(int j=n;j>=i;j--){
				printf("%d ",count);
				count--;
			}
			count=count+(a+1);
			count++;
		}else{
			for(int j=1;j<=(n-i+1);j++){
				printf("%d ",count);
				count++;
			}
		}
		printf("\n");
	}
	return 0;
}