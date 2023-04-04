//Q2 (iv)
#include<stdio.h>
int main(){
	int count=1,m,n;
	printf("Enter number of rows : ");
	scanf("%d",&n);
	printf("enter number of columns : ");
	scanf("%d",&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			a[i][j]=0;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(i%2==0){
			for(int j=0;j<=n-1-i;j++){
				a[i+j][j]=count;
				count++;
			}
		}else{
			for(int j=n-1-i;j>=0;j--){
				a[i+j][j]=count;
				count++;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}