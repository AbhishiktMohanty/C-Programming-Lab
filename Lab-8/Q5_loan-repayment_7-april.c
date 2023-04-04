//Q5 Loan repayment
#include <stdio.h>
int main()
{
    float loan,rate,dep;
    printf("Enter loan amount: ");
    scanf("%f",&loan);
    printf("Enter rate of interest: ");
    scanf("%f",&rate);
    printf("Enter deposit amount: ");
    scanf("%f",&dep);
    int i=1;
    while(loan>0)
    {
        loan=loan+((rate/100)*loan);
        loan=loan-dep;
        if(loan>0)
            printf("Loan amount after year %d = %f \n",i,loan);
        i++;
    }
    return 0;
}