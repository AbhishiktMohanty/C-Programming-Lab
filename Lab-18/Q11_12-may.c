//Q11
#include<stdio.h>
float sum(float num1,float num2)
{
    float s=num1+num2;
    return s;
}
float diff(float num1,float num2)
{
    float s=num1-num2;
    return s;
}
float mul(float num1,float num2)
{
    float s=num1*num2;
    return s;
}
float div(float num1,float num2)
{
    float s=num1/num2;
    return s;
}
int main()
    {
        float a,b;
        char operator;
        printf("Enter num1 and a opearator(+,-,*,/)and num2- ");
        scanf("%f %c %f",&a,&operator,&b);
        if(operator=='+')
            printf("%0.2f+%0.2f= %0.2f ",a,b,sum(a,b));
        else if(operator=='-')
            printf("%0.2f-%0.2f= %.02f ",a,b,diff(a,b));
        else if(operator=='*')
            printf("%0.2f*%0.2f= %.02f ",a,b,mul(a,b));
        else if(operator=='/')
            printf("%0.2f/%0.2f= %f ",a,b,div(a,b));
        else 
            printf("Incorrect input.");
        return 0;
    }