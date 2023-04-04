//Q4 Find the 3rd bit and 9th bit of a given integer
#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    int n1= 3;
    int n2= 9;

    int x1 = (num >> n1) & 1;
    int x2 = (num >> n2) & 1;
    printf("The 3rd bit of the number is %d\n", x1);
    printf("The 9th bit of the number is %d\n", x2);
    return 0;
}