//Q7
#include<stdio.h>

int main(){
	int n=7;
        int x = (n+1)/2;

        for(int i=1; i<=x; i++){
        for(int j= n-i; j>=1; j--){
            printf(" ");
        }
        for(int k=1; k<=(2*i-1); k++){
            if(k%2!=0){
                printf("1");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    int z = n-x;
    for(int i=z; i>=1; i--){
        for(int j=1; j<=2*z-i+1; j++){
            printf(" ");
        }
        for(int k=(2*i-1); k>=1; k--){
            if(k%2!=0){
                printf("1");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
        return 0;
}