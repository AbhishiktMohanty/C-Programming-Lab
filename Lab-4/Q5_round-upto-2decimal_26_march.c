//Q5 Round of upto 2 decimal places
#include<stdio.h>

int main(){
    float a;
    printf("Enter a real number with 4 decimal places: ");
    scanf("%f",&a);
    int b=a;

    float m=a-b;
    int new=m*1000;
    int new1=new%10;
    int dp=new-new1;
    int dp1=dp/10;
    if(new1>=5)
    {
        dp1++;
        
        float dp2=dp1*.01;
        float ott=b+dp2;
        printf("The rounded number is: %.2f",ott);
    }
    else
    {
        printf("The rounded number is: %.2f",a);
    }
    return 0;
}