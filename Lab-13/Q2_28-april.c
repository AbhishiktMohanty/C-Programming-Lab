//Q2
#include<stdio.h>
#include<fcntl.h>
int main(){
	int n,count=0;
	printf("Enter number of elements in the array : ");
	scanf("%d",&n);
	printf("Enter the array of %d inputs :\n",n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int m=0;
	for(int i=0;i<n;i++){
		if(a[i]<a[i+1]){
			m=1;
			continue;
		}else if(m>0){
			count++;
			m=0;
		}
	}
	count++;
	printf("Number of increasing sequence are %d",count);
	return 0;
}