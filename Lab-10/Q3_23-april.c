//Q3 Display In the given format
#include<stdio.h>

int main(){
	int i=1,j=5,count=1;
	x:
		if(i%2==1){
			int a=j;
			y:
				printf("%d ",count);
				count++;
				a--;
			if(a>=1){
				goto y;
			}
		}else{
			count=(count+j)-1;
			int a=j;
			z:
				printf("%d ",count);
				count--;
				a--;
			if(a>=1){
				goto z;
			}
			count=count+j+1;
		}
		printf("\n");
		i++;
		j--;
	if(i<=5){
		goto x;
	}
	
	return 0;
}