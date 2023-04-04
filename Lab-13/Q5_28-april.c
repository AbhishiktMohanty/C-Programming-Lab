//Q5
#include<stdio.h>
int main()
{
    int n,i, num, c = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter the numbers : \n");
    int a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter which number you want to search for: ");
    scanf("%d",&num);
    for (i=0;i<n;i++)
    {
        if (a[i]==num)
        {
            c++;
        }
    }
    printf("%d appears %d times", num, c);
	return 0;	
}
