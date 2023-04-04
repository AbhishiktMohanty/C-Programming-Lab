//Q4 principal ammount, intrest, withdraw, yill principal ammount zero.
#include <stdio.h>
int main()
{
    float prin,rate,with;
    printf("Enter principal amount: ");
    scanf("%f",&prin);
    printf("Enter rate of interest: ");
    scanf("%f",&rate);
    printf("Enter withdrawal amount: ");
    scanf("%f",&with);
    int i=1;
    while(prin>0)
    {
        prin=prin+((rate/100)*prin);
        prin=prin-with;
        if(prin>0)
            printf("Principal amount after year %d = %f \n",i,prin);
        i++;    
    }
    return 0;
}