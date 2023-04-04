//Q5 Discount bill
#include<stdio.h>

int main(){
    float p1,p2,p3;
    printf("Enter the prices of 3 items: \n");
    scanf("%f %f %f", &p1, &p2, &p3);

    float dis1,dis2,dis3;
    if(p1>=5000){
        dis1 = p1 - ((2.0/5.0)*p1);
    }
    else{
        dis1 = p1;
    }
    if(p1<5000 && p1>3000){
        dis1 = p1 - ((1.0/5.0)*p1);
    }
    else{
        dis1 = p1;
    }
    if(p1<3000 && p1>1000){
        dis1 = p1 - ((1.0/20.0)*p1);
    }
    else{
        dis1 = p1;
    }

    if(p2>=5000){
        dis2 = p2 - ((2.0/5.0)*p2);
    }
    else{
        dis2 = p2;
    }
    if(p2<5000 && p2>3000){
        dis2 = p2 - ((1.0/5.0)*p2);
    }
    else{
        dis2 = p2;
    }
    if(p2<3000 && p2>1000){
        dis2 = p2 - ((1.0/20.0)*p2);
    }
    else{
        dis2 = p2;
    }

    if(p3>=5000){
        dis3 = p3 - ((2.0/5.0)*p3);
    }
    else{
        dis3 = p3;
    }
    if(p3<5000 && p3>3000){
        dis3 = p3 - ((1.0/5.0)*p3);
    }
    else{
        dis3 = p3;
    }
    if(p3<3000 && p3>1000){
        dis3 = p3 - ((1.0/20.0)*p3);
    }
    else{
        dis3 = p3;
    }

    printf("The price of item 1 is %.2f. \n", dis1);
    printf("The price of item 2 is %.2f. \n", dis2);
    printf("The price of item 3 is %.2f. \n", dis3);
    printf("\n");
    float total = dis1+dis2+dis3;
    float disT;
    if(total>10000){
        disT = total - ((1.0/20.0)*total);
    }
    else{
        disT = total;
    }

    printf("The total price of the items is %.2f.", disT);
    return 0;
}