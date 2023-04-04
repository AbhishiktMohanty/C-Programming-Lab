//Q9 Summation in the given format.
#include<stdio.h>

int main(){
    int n;
    printf("Enter the term: ");
    scanf("%d", &n);
    int f1=1;
    int f2=2;
    int i=2;
    float t1,t2;
    float conv1;
    float conv2;
    float sum=0.00;
    float num = f1*1.00;
    float den = f2*1.00;
    float isum = num/den;
    float j=0;
    float k=1;
    float frac;
  
    while(i<=n){
        f1 = f2*(i+j+1);
        f2 = f1*(i+k+1);
        t1 = f1*1.00;
        t2 = f2*1.00;
        frac = t1/t2;
        sum = sum+frac;
        i++;
        j++;
        k++;
    }
    sum = sum + isum;
    printf("The sum of the terms is %f.\n", sum);
    return 0;
}