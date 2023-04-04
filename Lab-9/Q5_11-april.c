//Q5
#include<stdio.h>

int main(){
    int r=4;
    for(int i=1; i<=r; i++){
        for(int j=r-i; j>=0; j--){
            printf(" ");
        }
        for(int k=(r-i+1); k<=r; k++){
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}