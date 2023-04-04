//Q7 Given integer 
#include <stdio.h>
int main()
{
    int num1,b,c;
    printf("Enter the integer: ");
    scanf("%i",&num1);
    b=(num1&(0x00ff0000))>>8;
    c=(num1&(0x0000ff00))<<8;
    num1=num1&(0xff0000ff);
    num1=(c|b)|num1;
    printf("The desire integer is : 0x%x\n",num1);
    return 0;
}