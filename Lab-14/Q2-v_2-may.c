//Q2 (v)
#include<stdio.h>
int main(){
	int count=1,m,n;
	printf("Enter number of rows : ");
	scanf("%d",&n);
	printf("Enter number of columns : ");
	scanf("%d",&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			a[i][j]=0;
		}
	}
	for(int i=0;i<n;i++){
		int x=i;
		int j=n-1;
		while(x>=0){
			a[x][j]=count;
			count++;
			x--;
			j--;
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