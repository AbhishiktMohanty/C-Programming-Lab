//Q2 (ii)
#include<stdio.h>
int main(){
	int count=1,m,n;
	printf("Enter number of rows : ");
	scanf("%d",&n);
	printf("Enter number of columns : ");
	scanf("%d",&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		if(i%2==0){
			for(int j=0;j<m;j++){
				a[i][j]=count;
				count++;
			}
		}else{
			for(int j=m-1;j>=0;j--){
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