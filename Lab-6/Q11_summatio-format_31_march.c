//Q11 summation of series

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number to form the series: ");
    scanf("%d", &n);
    int a;
    float conv1,conv2;
    float sum=0.00;
    int i=1;
    int j=0;
    float frac;
  
    while(n>=1){
        n = n-j;
        a = i;
        conv1 = n*1.00;
        conv2 = a*1.00;
      
        if(i%2==0){
            frac = conv1/conv2;
            sum = sum+frac;
        }
        else{
            frac = conv2/conv1;
            sum = sum+frac;
        }
        i++;
        j++;
    }
    printf("The sum of the series is %f.\n", sum);
    return 0;
}