//Q2 (iii)
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
	int x;
	if(m%2==0){
		x=m/2;
	}else{
		x=(m-1)/2;
	}
	for(int y=1;y<=x;y++){
		for(int j=(y-1);j<y;j++){
			for(int i=0;i<n;i++){
				a[i][j]=count;
				count++;
			}
		}
		for(int j=m-y;j>m-y-1;j--){
			for(int i=n-1;i>=0;i--){
				a[i][j]=count;
				count++;
			}
		}
	}
	if(m%2!=0){
		int z=(m+1)/2;
		for(int i=0;i<n;i++){
			a[i][z]=count;
			count++;
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