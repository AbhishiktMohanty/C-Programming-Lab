//Q6 Calender
#include <stdio.h>
int main()
{  
    int day;
    printf("If Mon-1,\nTue-2,\nWed-3,\nThur-4,\nFri-5,\nSat-6,\nSun-7\nEnter the day of 1st January:-");
    scanf("%d",&day);
    if (day<=7)
    {
        printf("Mon\tTue\tWed\tThur\tFri\tSat\tSun\n");
        int t=day;
        for(int i=1;i<t;i++)
           {       
            printf("\t");
           }
        for(int i=1;i<=31;i++)
            { 
                printf("%d\t",i);
                if(t==7)
            { 
                printf("\n");t=0;
            }
                t++;
            } 
    }
        else 
        {
            printf("invalid input");
        }
    return 0;
}