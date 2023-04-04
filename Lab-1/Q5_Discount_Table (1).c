//Q5 Discount Table
#include<stdio.h>

int main(){
    int item1, item2, item3;
    
    printf("Enter the price of item 1: \n");
    scanf("%d", &item1);
    printf("Enter the price of item 2: \n");
    scanf("%d", &item2);
    printf("Enter the price of item 3: \n");
    scanf("%d", &item3);
    
    float dis1 = item1*4/5;
    float dis2 = item2*7/10;
    float dis3 = item3;
  
    float total = dis1+dis2+dis3;
    float dis_total = total*4/10;
    float total_after_dis = total*6/10;

    printf("\n Item \t\t Amount \t\t Discount"),
    printf("\nItem 1 \t\t  %d  \t\t\t20%%" ,item1);
    printf("\nItem 2 \t\t  %d  \t\t\t30%%",item2);
    printf("\nItem 3 \t\t  %d  \t\t\t 0%%",item3);
    printf("\n");
    printf("\nTotal after discount : %.2f",total);
    printf("\n After 40% Discount");
    printf("\n Final Amount : %.2f", total_after_dis);
    return 0;
}