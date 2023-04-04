//Q10
#include <stdio.h>
int increasing(int a1,char a2)
{
    for(int i=0;i<a1;i++)
    {
        for(int j=i;j<a1;j++)
        {    
            printf("%c ",a2);
        }
        printf("\n");
    }
    return 0;
}
int decreasing(int a1,char a2)
{
    for(int i=0;i<a1;i++)
    {
        for(int j=0;j<=i;j++)
        {    
            printf("%c ",a2);
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    int n1,n2,n3,n4;
    printf("Enter the number for printing'*': ");
    scanf("%d",&n1);
    printf("Enter the number for printing'=': ");
    scanf("%d",&n2);
    printf("Enter the number for printing'-': ");
    scanf("%d",&n3);
    printf("Enter the number for printing'#': ");
    scanf("%d",&n4);
        increasing(n1,'*');
        printf("AB\n");
        increasing(n2,'=');
        printf("CD\n");
        decreasing(n3,'-');
        printf("EX\n");
        increasing(n4,'#');
    return 0;
}