//Q2 (i)
#include<stdio.h>
int main(){
	int count=1,m,n;
	printf("Enter number of rows : ");
	scanf("%d",&n);
	printf("Enter number of columns : ");
	scanf("%d",&m);
	int a[n][m];
	for(int j=0;j<m;j++){
		if(j%2==0){
			for(int i=0;i<n;i++){
				a[i][j]=count;
				count++;
			}
		}else{
			for(int i=n-1;i>=0;i--){
				a[i][j]=count;
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