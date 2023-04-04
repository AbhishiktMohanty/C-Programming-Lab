//Q8 Prime numbers between n to m to be filled inside the array
#include<stdio.h>
int main(){
	int n,m,count=0,y=0;
	printf("Write the numbers between which you want to find the prime numbers :\n");
	scanf("%d %d",&n,&m);
	int x=(m-n)-1;
	int a[x];
	for(int i=n+1;i<m;i++){
		for(int j=2;j<i;j++){
			if(i%j==0){
				count=1;
			}
		}
		if(count==0){
			a[y]=i;
			y++;
		}else{
			count=0;
		}
	}
	printf("Prime numbers between %d and %d are:\n",n,m);
	for(int i=0;i<y;i++){
		printf("%d ",a[i]);
	}
	return 0;
}