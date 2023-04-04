//Q5 
#include<stdio.h>
int main(){
	int n,count=1,a;
  printf("Enter the dimention of the sqare : ");
	scanf("%d",&n);
  printf("The required pattern :\n");
	if(n%2==0){
		a=n/2;
		for(int i=1;i<=a;i++){
			for(int j=1;j<=a;j++){
				if(j<i){
					printf("%d",count);
					count++;
				}else if(j>=i){
					printf("%d",count);
				}
			}
			for(int j=a;j>=1;j--){
				if(j>i){
					printf("%d",count);
				}else if(j<=i){
					printf("%d",count);
					count--;
				}
			}
			count=1;
			printf("\n");
		}
		for(int i=1;i<=a;i++){
			for(int j=a;j>=1;j--){
				if(j>i){
					printf("%d",count);
					count++;
				}else if(j<=i){
					printf("%d",count);
				}
			}
			for(int j=1;j<=a;j++){
				if(j<=i){
					printf("%d",count);
				}else if(j>i){
					count--;
					printf("%d",count);
				}
			}
			count=1;
			printf("\n");
		}
	}else{
		a=(n-1)/2;
		for(int i=1;i<=a;i++){
			for(int j=1;j<=a+1;j++){
				if(j<i){
					printf("%d",count);
					count++;
				}
				else{
					printf("%d",count);
				}
			}
			for(int j=a;j>=1;j--){
				if(j>=i){
					printf("%d",count);
				}else{
					count--;
					printf("%d",count);
				}
			}
			count=1;
			printf("\n");
		}
		for(int i=1;i<=n;i++){
			if(i<=a){
				printf("%d",count);
				count++;
			}else{
				printf("%d",count);
				count--;
			}
		}
		printf("\n");
		count=1;
		for(int i=a;i>=1;i--){
			for(int j=1;j<=a+1;j++){
				if(j<i){
					printf("%d",count);
					count++;
				}
				else{
					printf("%d",count);
				}
			}
			for(int j=a;j>=1;j--){
				if(j>=i){
					printf("%d",count);
				}else{
					count--;
					printf("%d",count);
				}
			}
			count=1;
			printf("\n");
		}
	}
}