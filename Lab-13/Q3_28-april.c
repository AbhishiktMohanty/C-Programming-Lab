//Q3
#include <stdio.h>

int main()
{
    int n,b,d=0;
    printf("Enter the numbers of elements in the array : ");
    scanf("%d", &n);
	int a[n];
    printf("Enter the number whose array sequence you want to know:\n");
    scanf("%d",&b);
	int y=n/2,y1=y,n1=n-1;
	for(int i=0;i<y;i++)
    {
        a[i] =b-d;
        d++;
        b=a[i];
        a[n1]=b-d;
        d++;
        b=a[n1];
        n1--;
    }
    printf("\n");
    if (n%2!=0)
    {
        a[n1]=b-d;
    }
	for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
	return 0;
}