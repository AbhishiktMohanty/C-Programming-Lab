//Q10 Summation in the given format

#include<stdio.h>

int main(){
    int n;
    printf("Enter the numbers of terms: ");
    scanf("%d", &n);
    int i=1;
    int j=0;
    int k=2;
    float sum = 0.00;
    float frac;
    int num;
    int den;
    float convn;
    float convd;
    while(i<=n){
        num = i+j;
        den = i+k;
        convn = num*1.00;
        convd = den*1.00;
        frac  = convn/convd;
        sum = sum+frac;
        i++;
        j++;
        k++;
    }
    printf("The sum of the series is %f.\n", sum);
    return 0;
}