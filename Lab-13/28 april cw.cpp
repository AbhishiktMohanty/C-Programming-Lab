/*
//Q1
// i) Array with even index elements reversed

#include <stdio.h>
int main(){
    int n;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Original array : \n");
    for(int i=0;i<n;i++)
        printf("%d \n",arr[i]);
    int s=0,temp=0,e;
    if((n-1)%2==0)
        e=n-1;
    else
        e=n-2;
    while(s<e){
        temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s=s+2;
        e=e-2;
    }
    printf("Array with even index elements reversed : \n");
    for(int j=0;j<n;j++)
        printf("%d \n",arr[j]);
}
*/

/*
//Q1
// ii) Array with odd index elements reversed

#include <stdio.h>
int main(){
    int n;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Original array : \n");
    for(int i=0;i<n;i++)
        printf("%d \n",arr[i]);
    int s=1,temp=0,e;
    if((n-1)%2==0)
        e=n-2;
    else
        e=n-1;
    while(s<e){
        temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s=s+2;
        e=e-2;
    }
    printf("Array with odd index elements reversed : \n");
    for(int j=0;j<n;j++)
        printf("%d \n",arr[j]);
}
*/
/*
//Q2 Number of increasing sequences present in the array

#include <stdio.h>
int main(){
    int n;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Original array : \n");
    for(int i=0;i<n;i++)
        printf("%d \n",arr[i]);
    int ctr=0;
    for(int i=1;i<n;i++){
        if (arr[i]>arr[i-1] && arr[i]<arr[i+1])
            ctr++;
    }
    printf("Number of increasing sequences present in the array = %d",ctr);
}

//Q3

#include <stdio.h>

int main()
{   int a,num,rp=0;
    printf("Enter length of array : ");
    scanf("%d",&a);
    
    int om[a];
        printf("Enter the array : ");
            scanf("%d",&num);
    
    int y=a/2 ,y1=y,a1=a-1;
    
    for(int i=0;i<y;i++)
    {  om[i]=num-rp; rp++;num=om[i];
       om[a1]=num-rp; rp++;num=om[a1];a1--;
    }
    printf("\n");
    if(a%2!=0)
    { om[y1]=num-rp;}
    
    for(int i=0;i<a;i++)
    {
        printf("%d ",om[i]);   
    }
    return 0;
}

*/

//Q4

#include<stdio.h>
 int main ()
 {
    int num,m,k,c=0;
    printf("Enter length of array : ");
    scanf("%d",&num);
    m=(num-1)/2;
    int array[num];
    printf("Enter the array : ");
    scanf("%d",&k);
    for(int i=m;i>=0;i--)
    {
        if(i!=(num-i-1))
        {
            array[i]=k-c;
            k=array[i];
            c++;
            array[num-1-i]=k-c;
            k=array[num-1-i];
            c++;
        }
        else
        {
            array[i]=k;
            c++;
        }
    }
    printf("The array after rearranging: ");
    for(int i=0;i<num;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
 }

/* 
//Q5
 
#include<stdio.h>
int main()
{
    int n,i, num, c = 0;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int a[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter which number you want to search for: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            c++;
        }
    }
    printf("%d appears %d times", num, c);
}
*/
