//Write a program to convert Hexa decimal octal and decimal to hexadecimal, octal and decimal
#include <stdio.h>
int main()
{
    int n;
    scanf("%i",&n);
	printf("Decimal value = %d",n); 
	printf("\nOctal value = %o",n); 
	printf("\nHexadecimal value = %x",n);

    return 0;
}