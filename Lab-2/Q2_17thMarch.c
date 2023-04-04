//Take real value and display its integer part and decimal part
#include<stdio.h>
int main()
{
    float num,a;
    int integer;
    scanf("%f",&num);
    integer=num;
    a=(num-integer)*100;
    printf("%d\n",integer);
    printf("%.0f \n",a);
    return 0;
}