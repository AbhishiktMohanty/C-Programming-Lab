//Q1 Display 1 to 100 and 100 to 1.

#include<stdio.h>

int main(){
    int x=1;

    printf("The numbers from 1 to 100 are: \n");
    while(x<=100){
        printf("%d \n", x);
        x++;
    }
    printf("\n");
    int y=100;
    printf("The numbers from 100 to 1 are: \n");
    while(y>=1){
        printf("%d \n", y);
        y--;
    }
    return 0;
}